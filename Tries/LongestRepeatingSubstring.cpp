#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

class Node {
public:
	char data;
	Node* child[26];

	Node(char data) {
		this->data = data;
		for (int i = 0; i < 26; i++) this->child[i] = NULL;
	}
};

int maxLength = 0;
string res = "";

void insert(Node* root, string word) {
	Node* p = root;
	int counter = word.size();

	for (int i = 0; i < word.size(); i++) {
		int idx = word[i] - 'a';
		if (p->child[idx] == NULL) {
			Node* newNode = new Node(word[i]);
			p->child[idx] = newNode;
			counter--;
		}
		p = p->child[idx];
	}
	if (counter > maxLength) {
		maxLength = counter;
		res = word.substr(0, counter);
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

	while (n--) {
		cin >> word;
		Node* root = new Node('$');

		res = "";
		maxLength = 0;

		// Create suffix trie
		while (word.size() > 0) {
			insert(root, word);
			word.erase(0, 1);
		}

		cout << "MaxLength : " << maxLength << " | Substring : " << res << endl;
	}

	return 0;
}