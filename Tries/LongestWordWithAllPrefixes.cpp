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

class Trie {
	Node* root;

public:
	Trie() {
		root = new Node('$');
	}

	void insert(string &word) {
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

	bool checkIfPrefixExists(string &word) {
		Node* p = root;
		bool flag = true;
		for (char ch : word) {
			int idx = ch - 'a';
			if (p->child[idx] == NULL) return false;
			else {
				p = p->child[idx];
				if (p->counter == 0) return false;
			}
		}
		return true;
	}
};

string completeString(int n, vector<string> &a) {
	// Write your code here.
	Trie trie;
	for (auto &it : a)
		trie.insert(it);

	string res = "";
	for (auto &it : a) {
		if (trie.checkIfPrefixExists(it)) {
			if (it.size() > res.size())
				res = it;
			else if (it.size() == res.size() && it < res)
				res = it;
		}
	}
	if (res == "") return "None";
	else return res;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	return 0;
}