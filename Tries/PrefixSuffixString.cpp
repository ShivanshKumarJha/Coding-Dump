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
		p->counter++;
		p = p->child[idx];
	}
	p->counter++;
}

bool find(string word, Node* root) {
	Node* p = root;

	for (char ch : word) {
		int idx = ch - 'a';
		if (p->child[idx] == NULL) {
			return false;
		}
		p = p->child[idx];
	}
	return p->counter > 0;
}

int prefixSuffixString(vector<string> &s1, vector<string> s2) {
	// Code here
	Node* root1 = new Node('$');
	Node* root2 = new Node('$');

	for (int i = 0; i < s1.size(); i++) {
		insert(root1, s1[i]);
	}
	// insert the reverse of the string of s1
	for (int i = 0; i < s1.size(); i++) {
		string s = s1[i];
		reverse(s.begin(), s.end());
		insert(root2, s);
	}

	/* NOTE:
	Example: Searching "cat" in "xxcatxx" should not be there
	so if we insert the suffix catxx -> then we search return true
	hence let us take another example searching "ml" in "jrjiml"
	reverse(jrjiml) = lmijrj then search for the reverse(ml) = lm ,it is hence it should return true
	*/

	int ans = 0;
	for (int i = 0; i < s2.size(); i++) {
		if (find(s2[i], root1)) ans++;
		else {
			// search in the reversed word
			string s = s2[i];
			reverse(s.begin(), s.end());
			if (find(s, root2)) ans++;
		}
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