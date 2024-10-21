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
		this->counter = 0;
		for (int i = 0; i < 26; i++) this->child[i] = NULL;
	}
};

int max_count = 0;
string res = "";

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
	if (p->counter >  max_count) {
		max_count = p->counter;
		res = word;
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	string word;

	Node* root = new Node('$');
	while (n--) {
		cin >> word;
		insert(root, word);
	}
	cout << "word: " << res << " | frequency : " << max_count;

	return 0;
}