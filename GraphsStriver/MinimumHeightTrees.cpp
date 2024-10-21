#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

// Brute Approach -> Gives TLE
/*
vector<vector<int>> adj;
int size;

int bfs(int src, vector<int>& vis) {
	vis.resize(size, 0);
	queue<pair<int, int>> q;
	q.push({src, 0});
	vis[src] = 1;
	int ht = 0;

	while (!q.empty()) {
		int node = q.front().first;
		int currH = q.front().second;
		q.pop();
		ht = max(ht, currH);

		for (auto i : adj[node]) {
			if (vis[i] == 0) {
				vis[i] = 1;
				q.push({i, currH + 1});
			}
		}
	}
	return ht;
}

vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
	adj.resize(n);
	size = n;

	for (auto it : edges) {
		adj[it[0]].push_back(it[1]);
		adj[it[1]].push_back(it[0]);
	}

	vector<pair<int, int>> ans;

	for (int i = 0; i < n; i++) {
		vector<int> vis(n, 0);
		int height = bfs(i, vis);
		ans.push_back({height, i});
	}

	sort(ans.begin(), ans.end());
	vector<int> res;
	res.push_back(ans[0].second);
	for (int i = 1; i < n; i++) {
		if (ans[i].first == ans[0].first) res.push_back(ans[i].second);
		else break;
	}
	return res;
}
*/

// Optimised Approach
vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
	vector<int> indegree(n);
	vector<int> adj[n];

	for (auto it : edges) {
		int u = it[0];
		int v = it[1];
		adj[u].push_back(v);
		adj[v].push_back(u);
		indegree[u]++;
		indegree[v]++;
	}

	queue<int> q;
	for (int i = 0; i < n; i++) {
		if (indegree[i] == 1) q.push(i);
	}

	while (q.size() > 2) {
		int curr = q.front();
		q.pop();

		for (int nbr : adj[curr]) {
			indegree[nbr]--;
			if (indegree[nbr] == 1) q.push(nbr);
		}
	}

	vector<int> res;
	while (!q.empty()) {
		res.push_back(q.front());
		q.pop();
	}
	return res;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	return 0;
}