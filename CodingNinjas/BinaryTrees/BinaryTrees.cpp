#include<bits/stdc++.h>
using namespace std;

template<typename T>
class BinaryTreeNode{
public:
	T data;
	BinaryTreeNode<T>* left;
	BinaryTreeNode<T>* right;

	BinaryTreeNode(T data){
		this->data=data;
		left=NULL;
		right=NULL;
	}

	~BinaryTreeNode(){
		delete left;
		delete right;
	}
};

BinaryTreeNode<int>* takeInput(){
	int rootData;
	cin>>rootData;
	if(rootData==-1){
		return NULL;
	}

	BinaryTreeNode<int>* root=new BinaryTreeNode(rootData);
	BinaryTreeNode<int>* leftChild=takeInput();
	BinaryTreeNode<int>* rightChild=takeInput();
	root->left=leftChild;
	root->right=rightChild;
	return root;
}

BinaryTreeNode<int>* takeInputLevelWise(){

	queue<BinaryTreeNode<int>*> previousNodes;
	int rootData;cin>>rootData;

	if(rootData==-1){return NULL;}
	BinaryTreeNode<int>* root=new BinaryTreeNode(rootData);
	previousNodes.push(root);

	while(previousNodes.size()!=0){
		BinaryTreeNode<int>* temp=previousNodes.front();
		previousNodes.pop();
		
		int leftChildData,rightChildData;
		cin>>leftChildData>>rightChildData;
		if(leftChildData!=-1){
			BinaryTreeNode<int>* leftChild=new BinaryTreeNode<int>(leftChildData);
			temp->left=leftChild;
			previousNodes.push(leftChild);
		}
		if(rightChildData!=-1){
			BinaryTreeNode<int>* rightChild=new BinaryTreeNode<int>(rightChildData);
			temp->right=rightChild;
			previousNodes.push(rightChild);
		}		
	}
	return root;
}

void printTree(BinaryTreeNode<int>* root){
	if(root==NULL){return;}
	cout<<root->data<<":";

	if(root->left!=NULL){
		cout<<"L"<<root->left->data;
	}

	if(root->right!=NULL){
		cout<<"R"<<root->right->data;
	}
	cout<<endl;
	printTree(root->left);
	printTree(root->right);
}

void printLevelWise(BinaryTreeNode<int> *root) {
	// Write your code here
	if(root==NULL){return;}
	queue<BinaryTreeNode<int>*> previousNodes;
	previousNodes.push(root);
	while(previousNodes.size()!=0){
		BinaryTreeNode<int>* front=previousNodes.front();
		previousNodes.pop();
		cout<<front->data<<":";
		if(front->left!=NULL){
			cout<<"L:"<<front->left->data<<",";
			previousNodes.push(front->left);
		}
		else{
            cout << "L:" << "-1" << ",";
        }
		if(front->right!=NULL){
			cout<<"R:"<<front->right->data;
			previousNodes.push(front->right);
		}
		else{
			cout << "R:" << "-1";
		}
		cout<<endl;
	}
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	BinaryTreeNode<int>* root=takeInputLevelWise();
	printLevelWise(root);
	return 0;
}