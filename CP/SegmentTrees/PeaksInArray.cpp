#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

class SegmentTree {
	vector<int> arr;
	vector<int> tree;

public:
	SegmentTree(vector<int> ar) {
		arr = ar;
		int n = ar.size();
		tree.resize(4 * n);
	}

	void build() { build(1, 0, arr.size() - 1); }

	void update(int ind, int val) {
		arr[ind] = val;
		update(1, 0, arr.size() - 1, ind);

		// Update the left and right of the updated index element
		if (ind > 0)
			update(1, 0, arr.size() - 1, ind - 1);
		if (ind < arr.size() - 1)
			update(1, 0, arr.size() - 1, ind + 1);
	}

	int query(int l, int r) { return query(1, 0, arr.size() - 1, l, r); }

private:
	bool isPeak(int i) {
		if (i <= 0 || i >= arr.size() - 1)
			return false;
		return (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]);
	}

	void build(int node, int start, int end) {
		if (start == end)
			tree[node] = isPeak(start);
		else {
			int mid = start + (end - start) / 2;
			build(node * 2, start, mid);
			build(node * 2 + 1, mid + 1, end);
			tree[node] = tree[node * 2] + tree[node * 2 + 1];
		}
	}

	void update(int node, int start, int end, int ind) {
		if (start == end) {
			tree[node] = isPeak(start);
		} else {
			int mid = start + (end - start) / 2;
			if (ind <= mid) {
				update(node * 2, start, mid, ind);
			} else {
				update(node * 2 + 1, mid + 1, end, ind);
			}
			tree[node] = tree[node * 2] + tree[node * 2 + 1];
		}
	}

	int query(int node, int start, int end, int l, int r) {
		if (l > end || r < start)
			return 0;
		if (l <= start && end <= r)
			return tree[node];
		int mid = start + (end - start) / 2;
		int left = query(node * 2, start, mid, l, r);
		int right = query(node * 2 + 1, mid + 1, end, l, r);
		return left + right;
	}
};


class Solution {
public:
	vector<int> countOfPeaks(vector<int>& nums, vector<vector<int>>& queries) {
		SegmentTree st(nums);
		vector<int> res;
		st.build();

		for (auto query : queries) {
			if (query[0] == 1) {
				int l = query[1] + 1;
				int r = query[2] - 1;
				res.push_back(st.query(l, r));

			} else {
				int index = query[1];
				int val = query[2];
				st.update(index, val);
			}
		}
		return res;
	}
};
