#include<bits/stdc++.h>
using namespace std;

template<typename T>
class BinaryTreeNode{
public:
    T data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    BinaryTreeNode(T val){this->data=val;left=NULL:right=NULL;}
    ~BinaryTreeNode(){delete left;delete right;}
};

void levelOrder(BinaryTreeNode<int>* root){
    
}

int main(){
    
    return 0;
}