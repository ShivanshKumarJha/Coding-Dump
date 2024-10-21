#include<bits/stdc++.h>
using namespace std;

bool isBST3(BinaryTreeNode<int>* root,int min,int max){
	if(root==NULL){return true;}
	if(root->data<min || root->data>max){return false;}
	bool isLeftOk=isBST3(root->left,min,root->data-1);
	bool isRightOk=isBST3(root->right,root->data,max);
	return (isLeftOk && isRightOk);
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	return 0;
}