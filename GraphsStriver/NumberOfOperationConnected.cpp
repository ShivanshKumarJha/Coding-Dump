#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

class DisjointSet {
public:
	vector<int> rank, parent, size;
	DisjointSet(int n) {
		rank.resize(n + 1, 0);
		parent.resize(n + 1);
		size.resize(n + 1, 1);
		for (int i = 0; i <= n; i++) {parent[i] = i;}
	}

	int findUPar(int node) {
		if (node == parent[node]) return node;
		return parent[node] = findUPar(parent[node]);
	}

	void unionByRank(int u, int v) {
		int ulp_u = findUPar(u);
		int ulp_v = findUPar(v);
		if (ulp_u == ulp_v) return;

		if (rank[ulp_u] < rank[ulp_v]) {
			parent[ulp_u] = ulp_v;
		}
		else if (rank[ulp_u] > rank[ulp_v]) {
			parent[ulp_v] = ulp_u;
		}
		else {
			parent[ulp_v] = ulp_u;
			rank[ulp_u]++;
		}
	}

	void unionBySize(int u, int v) {
		int ulp_u = findUPar(u);
		int ulp_v = findUPar(v);
		if (ulp_u == ulp_v) return;

		if (size[ulp_u] < size[ulp_v]) {
			parent[ulp_u] = ulp_v;
			size[ulp_v] += size[ulp_u];
		}
		else {
			parent[ulp_v] = ulp_u;
			size[ulp_u] += size[ulp_v];
		}
	}
};

int Solve(int n, vector<vector<int>>& edge) {
	// code here
	DisjointSet ds(n);
	int eedges = 0;
	int compo = 0;
	for (auto it : edges) {
		int u = it[0];
		int v = it[1];
		if (ds.findUPar(u) == ds.findUPar(v)) eedges++;
		else ds.unionBySize(u, v);
	}
	for (int i = 0; i < n; i++) {
		if (ds.parent[i] == i) compo++;
	}
	int ans = compo - 1;
	if (eedges >= ans) return ans;
	else return -1;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	return 0;
}