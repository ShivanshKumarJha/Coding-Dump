#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

void sort(int src, vector<int>& vis, stack<int>& st, vector<vector<int>>& adj) {
	vis[src] = 1;
	for (auto nbr : adj[src]) {
		if (!vis[nbr]) sort(nbr, vis, st, adj);
	}
	st.push(src);
}

void dfs(int src, vector<int>& vis, vector<vector<int>>& adjRev) {
	vis[src] = 1;
	for (auto nbr : adjRev[src]) {
		if (!vis[nbr]) dfs(nbr, vis, adjRev);
	}
}

int kosaraju(int V, vector<vector<int>>& adj) {
	//code here
	vector<int> vis(V, 0);
	stack<int> st;
	for (int i = 0; i < V; i++) {
		if (!vis[i]) {
			sort(i, vis, st, adj);
		}
	}

	vector<vector<int>> adjRev(V);
	for (int i = 0; i < V; i++) {
		vis[i] = 0;
		for (auto nbr : adj[i]) {
			adjRev[nbr].push_back(i);
		}
	}

	int scc = 0;
	while (!st.empty()) {
		int node = st.top();
		st.pop();
		if (!vis[node]) {
			scc++;
			dfs(node, vis, adjRev);
		}
	}
	return scc;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	return 0;
}