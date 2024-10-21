#include<bits/stdc++.h>
using namespace std;

template<typename T>
class TreeNode{
public:
	T data;
	vector<TreeNode<T>*> children;

	TreeNode(T data){
		this->data=data;
	}
};

TreeNode<int>* takeInputLevelWise(){
	int rootData;
	cout<<"Enter the rootData"<<endl;
	cin>>rootData;
	TreeNode<int>* root=new TreeNode<int>(rootData);

	queue<TreeNode<int>*> pendingNodes;
	pendingNodes.push(root);

	while(pendingNodes.size()!=0){
		TreeNode<int>* front=pendingNodes.front();
		pendingNodes.pop();
		cout<<"Enter number of children of "<<front->data<<endl;
		int numChild;
		cin>>numChild;
		for(int i=0;i<numChild;i++){
			int childData;
			cout<<"Enter the "<<i<<"th child of "<<front->data<<endl;
			cin>>childData;
			TreeNode<int>* child=new TreeNode<int>(childData);
			front->children.push_back(child);
			pendingNodes.push(child);
		}
	}
	return root;
}

void printLevelWise(TreeNode<int>* root) {
    // Write your code here
    if (root == NULL) {
      return;
    }
    queue<TreeNode<int> *> ListOfNodes;
    ListOfNodes.push(root);
    while (ListOfNodes.size() != 0) {
      TreeNode<int> *front = ListOfNodes.front();
      ListOfNodes.pop();
      cout << front->data << ":";
      for (int i=0; i < front->children.size(); i++) {
        ListOfNodes.push(front->children[i]);
        if(i==front->children.size()-1){
            cout<<front->children[i]->data;
        }
        else{
            cout<<front->children[i]->data<<",";
        }
      }
      cout << endl;
    }
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	TreeNode<int>* root=takeInputLevelWise();
	printLevelWise(root);	
	return 0;
}