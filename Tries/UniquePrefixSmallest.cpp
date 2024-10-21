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

string res = "";
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
		res += ch;
		if (p->child[idx]->counter == 1) return;
		p = p->child[idx];
	}

	res = "";
}

vector<string> findPrefixes(string arr[], int n) {
	//code here
	Node* root = new Node('$');
	for (int i = 0; i < n; i++) {
		insert(root, arr[i]);
	}
	vector<string> ans;
	for (int i = 0; i < n; i++) {
		res = "";
		find(arr[i], root);
		ans.push_back(res);
	}
	return ans;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	return 0;
}