#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

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


vector<int> findRedundantConnection(vector<vector<int>>& edges) {
	int n = edges.size();
	DisjointSet dsu(1001);
	for (int i = 0; i < n; i++) {
		int u = edges[i][0];
		int v = edges[i][1];

		int parentU = dsu.findUPar(u);
		int parentV = dsu.findUPar(v);
		if (parentU == parentV) return {u, v};
		dsu.unionBySize(u, v);
	}
	return { -1, -1};
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	return 0;
}