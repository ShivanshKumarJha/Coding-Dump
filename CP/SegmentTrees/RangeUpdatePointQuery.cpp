#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

class SegmentTree {
	vector<int> lazy;
	vector<int> arr;
	// l,r => range of the segment tree
	// start,end => range of the update or build query

public:
	SegmentTree(vector<int> ar) {
		arr = ar;
		lazy.resize(arr.size() * 4);
		build(1, 0, arr.size() - 1);
	}

	void build() {
		build(1, 0, arr.size() - 1);
	}

	void update(int l, int r, int val) {
		update(1, 0, arr.length() - 1, l, r, val);
	}

	int query(int ind) {
		return query(1, 0, arr.size() - 1, ind);
	}

private:
	void build(int node, int start, int end) {
		if (start == end) lazy[node] = arr[start];
		else {
			int mid = start + (end - start) / 2;
			build(node * 2, start, mid);
			build(node * 2 + 1, mid + 1, end);
			lazy[node] = 0;
		}
	}

	void update(int node, int start, int end, int l, int r, int val) {
		if (end < l || r < start) return;
		if (start == end) lazy[node] += val;
		else if (l <= start && end <= r) lazy[node] += val;
		else {
			int mid = start + (end - start) / 2;
			update(node * 2, start, mid, l, r, val);
			update(node * 2, mid + 1, end, l, r, val);
		}
	}

	void propagate(int node, int start, int end) {
		if (start == end) return;
		int left = 2 * node;
		int right = 2 * node + 1;

		lazy[left] += lazy[node];
		lazy[right] += lazy[node];
		lazy[node] = 0;
	}

	int query(int node, int start, int end, int ind) {
		propagate(node, start, end);
		if (start == end) return lazy[node];
		else {
			int mid = start + (end - start) / 2;
			if (start <= ind && ind <= mid) return query(node * 2, start, mid, ind);
			else return query(node * 2 + 1, mid + 1, end, ind);
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