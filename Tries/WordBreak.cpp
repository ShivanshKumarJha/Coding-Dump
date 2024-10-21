#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

class Node {
public:
	char data;
	int counter;
	Node* child[26];

	Node(char data) {
		this->data = data;
		counter = 0;
		for (int i = 0; i < 26; i++) this->child[i] = NULL;
	}
};

void insert(Node* root, string word) {
	Node* p = root;

	for (char ch : word) {
		int idx = ch - 'a';
		if (p->child[idx] == NULL) {
			Node* newNode = new Node(ch);
			p->child[idx] = newNode;
		}
		p = p->child[idx];
	}
	p->counter++;
}

bool find(string word, Node* root) {
	Node* p = root;

	for (char ch : word) {
		int idx = ch - 'a';
		if (p->child[idx] == NULL) return false;
		p = p->child[idx];
	}
	return (p->counter > 0);
}

class Solution {
private:
	bool findHelper(Node* root, string s, int ind) {
		if (ind == s.size()) return true;
		for (int j = ind; j < s.size(); j++) {
			string firstPart = s.substr(ind, j - ind + 1);
			if (find(firstPart, root) && findHelper(root, s, j + 1)) return true;
		}
		return false;
	}

public:
	// A : given string to search
	// B : vector of available strings
	int wordBreak(string A, vector<string> &B) {
		//code here
		Node* root = new Node('$');
		for (int i = 0; i < B.size(); i++) {
			insert(root, B[i]);
		}
		return findHelper(root, A, 0) ? 1 : 0;
	}
};