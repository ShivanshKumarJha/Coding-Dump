// #include<bits/stdc++.h>
// #include "BinaryTrees.h"
// using namespace std;

// class BST{
// 	BinaryTreeNode<int>* root;

// public:
// 	BST(){
// 		root=NULL;
// 	}

// 	~BST(){
// 		delete root;
// 	}

// 	void deleteData(int data){

// 	}

// 	void insert(int data){

// 	}

// private:
// 	bool hasData(int data,BinaryTreeNode<int>* root){
// 		if(root==NULL){return false;}
// 		if(root->data==data){return true;}
// 		else if(data<root->data){
// 			return hasData(data,root->left);
// 		}
// 		else{
// 			return hasData(data,root->right);
// 		}
// 	}

// public:
// 	bool hasData(int data){
// 		return hasData(data,root);
// 	} 

// };

// int main(){
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);

// 	return 0;
// }









/**********************************************************

	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public: 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this->data = data;
        	left = NULL;
        	right = NULL;
    	}
	};
	
***********************************************************/

class BST {
    // Define the data members
  BinaryTreeNode<int> *root;
  public:
    BST() { 
        // Implement the Constructor
        root=NULL;
    }

	/*----------------- Public Functions of BST -----------------*/
   private:
    bool hasData(int data, BinaryTreeNode<int> *root) {
      if (root == NULL) {
        return false;
      }
      if (root->data == data) {
        return true;
      } else if (data < root->data) {
        return hasData(data, root->left);
      } else {
        return hasData(data, root->right);
      }
    }

    BinaryTreeNode<int> *deleteData(int data, BinaryTreeNode<int> *node) {
      if (node == NULL) {
        return NULL;
      }

      if (data > node->data) {
        node->right = deleteData(data, node->right);
        return node;
      } else if (data < node->data) {
        node->left = deleteData(data, node->left);
        return node;
      } else {
        if (node->left == NULL && node->right == NULL) {
          delete node;
          return NULL;
        } else if (node->left == NULL) {
          BinaryTreeNode<int> *temp = node->right;
          node->right = NULL;
          delete node;
          return temp;
        } else if (node->right == NULL) {
          BinaryTreeNode<int> *temp = node->left;
          node->left = NULL;
          delete node;
          return temp;
        } else {
          BinaryTreeNode<int> *minNode = node->right;
          while (minNode->left != NULL) {
            minNode = minNode->left;
          }
          int rightMin = minNode->data;
          node->data = rightMin;
          node->right = deleteData(rightMin, node->right);
          return node;
        }
      }
    }

    void printTree(BinaryTreeNode<int> *root) {
        if (root == NULL) {
            return;
        }
        cout << root->data << ":";
        if (root->left != NULL) {
            cout << "L:" << root->left->data << ",";
        }

        if(root->right != NULL){
            cout << "R:" << root->right->data;
        }
      cout << endl;
      printTree(root->left);
      printTree(root->right);
    }

    BinaryTreeNode<int> *insert(int data, BinaryTreeNode<int> *node) {
      if (node == NULL) {
        BinaryTreeNode<int> *newNode = new BinaryTreeNode<int>(data);
        return newNode;
      }

      if (data < node->data) {
        node->left = insert(data, node->left);
      } else {
        node->right = insert(data, node->right);
      }
      return node;
    }

   public:
    void remove(int data) { 
        // Implement the remove() function 
        root=deleteData(data, root);
    }

    void print() { 
        // Implement the print() function
        printTree(root);
        
    }

    void insert(int data) { 
        // Implement the insert() function
        this->root = insert(data, this->root);
    }

    bool search(int data) {
		// Implement the search() function
        return hasData(data, root);
    }

}; 