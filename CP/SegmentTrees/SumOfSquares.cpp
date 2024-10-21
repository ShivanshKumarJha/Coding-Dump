#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

class SegmentTree {
	vector<int> arr;
	vector<int> lazy;
	vector<pair<int, int>> tree;

public:
	SegmentTree(vector<int> ar) {
		int n = ar.size();
		arr = ar;
		lazy.resize(4 * n);
		tree.resize(4 * n);
	}

	void build() {
		build(1, 0, arr.size() - 1);
	}

	void update(int l, int r, int val) {
		update(1, 0, arr.size() - 1, l, r, val);
	}

	int query(int l, int r) {
		return query(1, 0, arr.size() - 1, l, r).second;
	}

private:
	pair<int, int> calc(pair<int, int>& a, pair<int, int>& b) {
		auto [ls, lsq] = a;
		auto [rs, rsq] = b;
		int nodeSum = ls + rs;
		int nodeSq = lsq + rsq;
		return {nodeSum, nodeSq};
	}

	void propagate(int node, int start, int end) {
		if (lazy[node] == 0) return;
		if (start == end) {
			tree[node].first += lazy[node];
			tree[node].second += (tree[node].first * tree[node].first);
		}
		else {
			auto curr = tree[node];
			// first -> sum and second -> squareSum
			int count = end - start + 1;
			curr.second += (count * (lazy[node] ^ 2) + 2 * lazy[node] * curr.first);
			curr.first += (count * lazy[node]);

			lazy[node * 2] += lazy[node];
			lazy[node * 2 + 1] += lazy[node];
		}
		lazy[node] = 0;
	}

	void build(int node, int start, int end) {
		if (start == end) {
			// sum,square
			tree[start] = make_pair(arr[node], arr[node] * arr[node]);
		}
		else {
			int mid = start + (end - start) / 2;
			build(node * 2, start, mid);
			build(node * 2 + 1, mid + 1, end);
			tree[node] = calc(tree[node * 2], tree[node * 2 + 1]);
		}
	}

	void update(int node, int start, int end, int l, int r, int val) {
		propagate(node, start, end);
		if (end < l || r < start) return;
		if (start == end) {
			lazy[node] += val;
			propagate(node, start, end);
		}
		else if (l <= start && end <= r) {
			lazy[node] += val;
			propagate(node, start, end);
		}
		else {
			int mid = start + (end - start) / 2;
			update(node * 2, start, mid, l, r, val);
			update(node * 2 + 1, mid + 1, end, l, r, val);
			tree[node] = calc(tree[node * 2], tree[node * 2 + 1]);
		}
	};

	pair<int, int> query(int node, int start, int end, int l, int r) {
		propagate(node, start, end);
		if (end < l || r < start) return {0, 0};
		if (start == end) return tree[node];
		else if (l <= start && end <= r) return tree[node];
		else {
			int mid = start + (end - start) / 2;
			auto left = query(node * 2, start, mid, l, r);
			auto right = query(node * 2 + 1, mid + 1, end, l, r);
			return calc(left, right);
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