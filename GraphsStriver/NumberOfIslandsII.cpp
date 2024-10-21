#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

class DisjointSet {
	vector<int> rank, parent, size;

public:
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

bool isValid(int adjR, int adjC, int n, int m) {
	return adjR >= 0 && adjR < n && adjC >= 0 && adjC < m;
}

vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators) {
	// code here
	int vis[n][m];
	memset(vis, 0, sizeof vis);
	DisjointSet ds(n * m);
	int cnt = 0;
	vector<int> ans;

	for (auto it : operators) {
		int row = it[0];
		int col = it[1];
		if (vis[row][col] == 1) {
			ans.push_back(cnt);
			continue;
		}
		vis[row][col] = 1;
		cnt++;
		int dr[] = { -1, 0, 1, 0};
		int dc[] = {0, 1, 0, -1};

		for (int i = 0; i < 4; i++) {
			int adjRow = row + dr[i];
			int adjCol = col + dc[i];
			if (isValid(adjRow, adjCol, n, m)) {
				if (vis[adjRow][adjCol]) {
					int nodeNo = row * m + col;
					int adjNodeNo = adjRow * m + adjCol;
					if (ds.findUPar(nodeNo) != ds.findUPar(adjNodeNo)) {
						cnt--;
						ds.unionBySize(nodeNo, adjNodeNo);
					}
				}
			}
		}
		ans.push_back(cnt);
	}
	return ans;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	return 0;
}