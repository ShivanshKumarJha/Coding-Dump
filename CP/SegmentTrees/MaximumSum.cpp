#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

class SegmentTree {
	vector<int> arr;
	vector<pair<int, int>> tree;

public:
	SegmentTree(vector<int> ar) {
		int n = ar.size();
		arr = ar;
		tree.resize(4 * n);
	}

	void build() {
		build(1, 0, arr.size() - 1);
	}

	void update(int ind, int val) {
		update(1, 0, arr.size() - 1, ind, val);
	}

	int query(int l, int r) {
		query(1, 0, arr.size() - 1, l, r);
	}

private:
	pair<int, int> calc(pair<int, int>& a, pair<int, int>& b) {
		auto [ls, lm] = a;
		auto [rs, rm] = b;
		int nodeSum = max({ls, rs, lm + rm});
		int nodeMax = max(lm, rm);
		return {nodeSum, nodeMax};
	}

	void build(int node, int start, int end) {
		if (start == end) {
			tree[start] = make_pair(arr[node], arr[node]);
		}
		else {
			int mid = start + (end - start) / 2;
			build(node * 2, start, mid);
			build(node * 2 + 1, mid + 1, end);
			tree[node] = calc(tree[node * 2], tree[node * 2 + 1]);
		}
	}

	void update(int node, int start, int end, int ind, int val) {
		if (start == end) {
			arr[start] = val;
			tree[node] = make_pair(val, val);
		}
		else {
			int mid = start + (end - start) / 2;
			if (start <= ind && ind <= mid) {
				update(node * 2, start, mid, val);
			}
			else {
				update(node * 2 + 1, mid + 1, end, val);
			}
			tree[node] = calc(tree[node * 2], tree[node * 2 + 1]);
		}
	};

	int query(int node, int start, int end, int l, int r) {
		if (end < l || r < start) return {0, 0};
		if (start == end) return tree[node].first;
		else if (l <= start && end <= r) return tree[node].first;
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