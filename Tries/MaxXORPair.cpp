#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

class node {
public:
	node* left;
	node* right;
};

class trie {
	node* root;

public:
	trie() {
		root = new node();
	}

	void insert(int n) {
		node* temp = root;
		for (int i = 31; i >= 0; i--) {
			int bit = (n >> i) & 1;

			if (bit == 0) {
				if (temp->left == NULL) {
					temp->left = new node();
				}
				temp = temp->left;
			}

			else {
				if (temp->right == NULL) {
					temp->right = new node();
				}
				temp = temp->right;
			}
		}
	}

	int maxXorHelper(int value) {
		int currAns = 0;
		node* temp = root;
		for (int j = 31; j >= 0; j--) {
			int bit = (value >> j) & 1;

			if (bit == 0) {
				// Find the complementary value
				if (temp->right) {
					temp = temp->right;
					currAns += (1 << j);
				}
				else temp = temp->left;
			}
			else {
				if (temp->left) {
					temp = temp->left;
					currAns += (1 << j);
				}
				else {
					temp = temp->right;
				}
			}
		}
		return currAns;
	}

	int maxXor(int arr[], int n) {
		int max_xor = 0;
		for (int i = 0; i < n; i++) {
			insert(arr[i]);
			max_xor = max(max_xor, maxXorHelper(arr[i]));
		}
		return max_xor;
	}
};

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	return 0;
}