#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int spanningTree(int V, vector<vector<int>> adj[]) {
	// code here
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	vector<int> vis(V, 0);
	// {wt,node}

	pq.push({0, 0});
	int sum = 0;
	while (!pq.empty()) {
		int wt = pq.top().first;
		int node = pq.top().second;
		pq.pop();

		if (vis[node]) continue;
		// add it to the MST
		vis[node] = 1;
		sum += wt;
		for (auto it : adj[node]) {
			int adjNode = it[0];
			int edgeWt = it[1];
			if (!vis[adjNode]) pq.push({edgeWt, adjNode});
		}
	}
	return sum;
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	return 0;
}