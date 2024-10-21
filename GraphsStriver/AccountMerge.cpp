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

vector<vector<string>> accountsMerge(vector<vector<string>> &accounts) {
	// code here
	int n = accounts.size();
	DisjointSet ds(n);
	sort(accounts.begin(), accounts.end());
	unordered_map<string, int> mapMailNode;
	// Create the disjoint set along with the filling of map
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < accounts[i].size(); j++) {
			string mail = accounts[i][j];
			if (mapMailNode.find(mail) == mapMailNode.end()) {
				mapMailNode[mail] = i;
			}
			else
				ds.unionBySize(i, mapMailNode[mail]);
		}
	}

	// Store the merged data
	vector<string> mergedMail[n];
	for (auto it : mapMailNode) {
		string mail = it.first;
		int node = ds.findUPar(it.second);
		mergedMail[node].push_back(mail);
	}

	// Now store the final ans leaving the empty field
	vector<vector<string>> ans;
	for (int i = 0; i < n; i++) {
		if (mergedMail[i].size() == 0) continue;
		sort(mergedMail[i].begin(), mergedMail[i].end());
		vector<string> temp;
		temp.push_back(accounts[i][0]);
		for (auto it : mergedMail[i]) {
			temp.push_back(it);
		}
		ans.push_back(temp);
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