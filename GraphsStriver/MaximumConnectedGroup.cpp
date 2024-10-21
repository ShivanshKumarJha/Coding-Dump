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

bool isValid(int newR, int newC, int n) {
	return newR >= 0 && newR < n && newC >= 0 && newC < n;
}

int MaxConnection(vector<vector<int>>& grid) {
	int n = grid.size();
	DisjointSet ds(n * n);
	// Step 1 --> Connecting components
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < n; col++) {
			if (grid[row][col] == 0) continue;
			int dr[] = { -1, 0, 1, 0};
			int dc[] = {0, 1, 0, -1};
			for (int ind = 0; ind < 4; ind++) {
				int adjR = row + dr[ind];
				int adjC = col + dc[ind];
				if (isValid(adjR, adjC, n) && grid[adjR][adjC] == 1) {
					int nodeNo = row * n + col;
					int adjNodeNo = adjR * n + adjC;
					ds.unionBySize(nodeNo, adjNodeNo);
				}
			}
		}
	}

	int ans = -1;
	// Try to ccnvert all zeroes
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < n; col++) {
			if (grid[row][col] == 1) continue;
			int dr[] = { -1, 0, 1, 0};
			int dc[] = {0, 1, 0, -1};
			set<int> components;
			for (int ind = 0; ind < 4; ind++) {
				int adjR = row + dr[ind];
				int adjC = col + dc[ind];
				if (isValid(adjR, adjC, n) && grid[adjR][adjC] == 1) {
					int nodeNo = adjR * n + adjC;
					components.insert(ds.findUPar(nodeNo));
				}
			}
			int sizeTotal = 1;
			for (auto it : components) {
				sizeTotal += (ds.size[it]);
			}
			ans = max(ans, sizeTotal);
		}
	}

	// For handling the test cases when all the cells have 1
	return ans == -1 ? n * n : ans;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	return 0;
}