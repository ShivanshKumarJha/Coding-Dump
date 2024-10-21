#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

int lazy[10000] = {0};

void updateRangeLazy(int* tree, int ss, int se, int l, int r, int increament, int index) {
	// before going down resolve the lazy value if it exists
	if (lazy[index] != 0) {
		tree[index] += lazy[index];
		// For non leaf node the lazy should be passed to children
		if (ss != se) {
			lazy[2 * index] += lazy[index];
			lazy[2 * index + 1] += lazy[index];
		}
		lazy[index] = 0; //Clear the lazy value at current node
	}

	// Base Case -> No overlap
	if (ss > r or l > se) return;

	// Recursive case -> complete overlap
	if (ss >= l and se <= r) {
		tree[index] += increament;

		// create a new lazy value for children node
		if (ss != se) {
			lazy[2 * index] += increament;
			lazy[2 * index + 1] += increament;
		}
		return;
	}

	// Recursive case-> partial overlap
	int mid = ss + (se - ss) / 2;
	updateRangeLazy(tree, ss, mid, l, r, increament, 2 * index);
	updateRangeLazy(tree, mid + 1, se, l, r, increament, 2 * index + 1);
	// Update the tree of the index
	tree[index] = min(tree[2 * index], tree[2 * index + 1]);
	return;
}


int queryLazy(int* tree, int ss, int se, int qs, int qe, int index) {
	// before going down resolve the lazy value if it exists
	if (lazy[index] != 0) {
		tree[index] += lazy[index];
		// For non leaf node the lazy should be passed to children
		if (ss != se) {
			lazy[2 * index] += lazy[index];
			lazy[2 * index + 1] += lazy[index];
		}
		lazy[index] = 0; //Clear the lazy value at current node
	}

	// Query Logic
	// No Overlap
	if (ss > qe or se < qs) return INT_MAX;

	// Complete Overlap
	if (ss >= qs && se <= qe) {
		return tree[index];
	}

	// Partial Overlap
	int mid = ss + (se - ss) / 2;
	int left = queryLazy(tree, ss, mid, qs, qe, 2 * index);
	int right = queryLazy(tree, mid + 1, se, qs, qe, 2 * index + 1);
	return min(left, right);
}


void buildTree(int* a, int s, int e, int* tree, int index) {
	if (s == e) {
		tree[index] = a[s];
		return;
	}
	// Recursive Call
	int mid = s + (e - s) / 2;
	buildTree(a, s, mid, tree, 2 * index);
	buildTree(a, mid + 1, e, tree, 2 * index + 1);
	tree[index] = min(tree[2 * index], tree[2 * index + 1]);
	return;
}


int query(int* tree, int ss, int se, int qs, int qe, int index) {
	// Complete Overlap
	if (ss >= qs and se <= qe) return tree[index];

	// No Overlap
	if (qe < ss || qs > se) return INT_MAX;

	// Partial Overlap
	int mid = ss + (se - ss) / 2;
	int left = query(tree, ss, mid, qs, qe, 2 * index);
	int right = query(tree, mid + 1, se, qs, qe, 2 * index + 1);
	return min(left, right);
}


void update(int* tree, int ss, int se, int i, int increament, int index) {
	// if i is out of bounds
	if (i < ss || i > se) return;

	// leaf node
	if (ss == se) {
		tree[index] += increament;
		return;
	}

	int mid = ss + (se - ss) / 2;
	update(tree, ss, mid, i, increament, 2 * index);
	update(tree, mid + 1, se, i, increament, 2 * index + 1);
	tree[index] = min(tree[2 * index], tree[2 * index + 1]);
	return;
}


void updateRange(int* tree, int ss, int se, int l, int r, int increament, int index) {
	// out of bounds
	if (l > se || r < ss) return;

	// leaf node
	if (ss == se) {
		tree[index] += increament;
		return;
	}

	int mid = ss + (se - ss) / 2;
	updateRange(tree, ss, mid, l, r, increament, 2 * index);
	updateRange(tree, mid + 1, se, l, r, increament, 2 * index + 1);
	return;
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a[] = {1, 3, 2, -5, 6, 4};
	int n = sizeof(a) / sizeof(int);

	int* tree = new int[4 * n + 1];
	buildTree(a, 0, n - 1, tree, 1);

	updateRangeLazy(tree, 0, n - 1, 0, 2, 10, 1);
	updateRangeLazy(tree, 0, n - 1, 0, 4, 10, 1);
	cout << "Q1 1-1 " << queryLazy(tree, 0, n - 1, 1, 1, 1) << "\n";
	updateRangeLazy(tree, 0, n - 1, 3, 4, 10, 1);
	cout << "Q2 3-5 " << queryLazy(tree, 0, n - 1, 3, 5, 1) << "\n";
	return 0;
}