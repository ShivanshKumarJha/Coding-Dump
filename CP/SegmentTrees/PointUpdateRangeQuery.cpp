#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

class SegmentTree {
	vector<int> arr;
	vector<int> tree;

	SegmentTree(vector<int> ar) {
		arr = ar;
		int n = ar.size();
		tree.resize(4 * n);
	}

public:
	void build() {
		build(1, 0, arr.size() - 1);
	}

	void update(int ind, int val) {
		update(node, start, end, ind, val);
	}

	int query(int l, int r) {
		return query(1, 0, arr.size() - 1, l, r);
	}

private:
	void build(int node, int start, int end) {
		if (start == end) tree[node] = arr[start];
		else {
			int mid = start + (end - start) / 2;
			build(node * 2, start, mid);
			build(node * 2 + 1, mid + 1, end);
			tree[node] = tree[node * 2] + tree[node * 2 + 1];
		}
	}

	void update(int node, int start, int end, int ind, int val) {
		if (start == end) tree[start] = val;
		else {
			int mid = start + (end - start) / 2;
			if (start <= node && node <= end) {
				update(node * 2, start, mid, ind, val);
			}
			else {
				update(node * 2 + 1, mid + 1, end, ind, val);
			}
			tree[node] = tree[node * 2] + tree[node * 2 + 1];
		}
	}

	// start,end = segment tree
	int query(int node, int start, int end, int l, int r) {
		if (l > end || r < start) return 0;
		if (start == end) return tree[node];
		if (l <= start && end <= r) return tree[node];
		else {
			int mid = start + (end - start) / 2;
			int left = query(node * 2, start, mid, l, r);
			int right = query(node * 2 + 1, mid + 1, end, l, r);
			return left + right;
		}
	}
};

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	return 0;
}