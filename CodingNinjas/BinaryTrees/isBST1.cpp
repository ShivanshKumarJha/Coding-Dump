#include<bits/stdc++.h>
using namespace std;

int maximum(BinaryTreeNode<int>* root){
	if(root==NULL){return INT_MIN;}
	return max(root->data,max(maximum(root->left),maximum(root->right)));
}

int minimum(BinaryTreeNode<int>* root){
	if(root==NULL){return INT_MAX;}
	return min(root->data,min(minimum(root->left),minimum(root->right)));
}

bool isBST1(BinaryTreeNode<int>* root){
	if(root==NULL){return true;}

	int leftMax=maximum(root->left);
	int rightMin=minimum(root->right);

	bool smallOutput=(root->data>leftMax) && (root->data<rightMin) && (isBST1(root->left)) && (isBST1(root->right));
	return smallOutput;
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	return 0;
}