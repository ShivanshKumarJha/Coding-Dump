#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

class FindElements {
private:
	TreeNode* temp;
	void recover(TreeNode* node, int val) {
		if (!node) return;
		node->val = val;
		recover(node->left, 2 * val + 1);
		recover(node->right, 2 * val + 2);
	}

	bool findTarget(TreeNode* node, int target) {
		if (!node) return false;
		if (node->val == target)
			return true;
		return findTarget(node->left, target) || findTarget(node->right, target);
	}

public:
	FindElements(TreeNode* root) {
		this->temp = root;
		recover(temp, 0);
	}

	bool find(int target) {
		return findTarget(temp, target);
	}
};


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	return 0;
}