#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

int ans = 0;
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
		p->counter++;
		p = p->child[idx];
	}
	p->counter++;
}

void find(string word, Node* root) {
	Node* p = root;

	for (char ch : word) {
		int idx = ch - 'a';
		if (p->child[idx] == NULL) {ans = 0; return;}
		p = p->child[idx];
	}
	ans = p->counter;
	return;
}

int klengthpref(string arr[], int n, int k, string str) {
	if (arr[0].size() < k) return 0;
	if (str.size() < k) return 0;
	Node* root = new Node('$');

	string prefix = str.substr(0, k);
	for (int i = 0; i < n; i++) {
		insert(root, arr[i]);
	}
	find(prefix, root);
	return ans;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	return 0;
}