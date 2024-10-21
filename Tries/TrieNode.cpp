#include<bits/stdc++.h>
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

void deleteNode(string word, Node* root) {
	Node* p = root;

	for (char ch : word) {
		int idx = ch - 'a';
		if (p->child[idx] == NULL) return;
		p = p->child[idx];
	}
	p->counter--;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Node* root = new Node('$');
	int n;
	string word;

	cin >> n;
	while (n--) {
		cin >> word;
		insert(root, word);
	}

	int q;
	cin >> q;
	while (q--) {
		int option;
		string word;
		cin >> option >> word;

		if (option == 1) {
			bool ans = find(word, root);
			if (ans) cout << "Word " << word << " is existed\n";
			else cout << "Word " << word << " doesn't exist\n";
		}

		else deleteNode(word, root);
	}
	return 0;
}