#include<bits/stdc++.h>
using namespace std;

class IsBSTReturn{
public:
	bool IsBST;
	int minimum;
	int maximum;
};	

IsBSTReturn IsBST2(BinaryTreeNode<int>* root){
	if(root==NULL){
		IsBSTReturn ans;
		ans.IsBST=true;ans.minimum=INT_MAX;ans.maximum=INT_MIN;
		return ans;
	}

	IsBSTReturn leftOutput=IsBST2(root->left);
	IsBSTReturn rightOutput=IsBST2(root->right);
	int minimum=min(root->data,min(leftOutput.minimum,rightOutput.minimum));
	int maximum=max(root->data,max(leftOutput.maximum,rightOutput.maximum));
	bool IsBSTans=(root->data>leftOutput.maximum) && (root->data<=rightOutput.minimum) && (leftOutput.isBST) && (rightOutput.isBST);
	IsBSTReturn ans;
	ans.maximum=maximum;
	ans.minimum=minimum;
	ans.IsBST=IsBSTans;
	return ans;
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	return 0;
}