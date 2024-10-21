#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

void f(int src, vector<int> adj[], vector<int>& res) {
	// O(4)
	for (int i = 0; i < 4; i++) {
		bool isAvail = true;
		// O(3) --> at max there will be 3 neighbours
		for (auto nbr : adj[src]) {
			if (res[nbr] == i + 1) {
				isAvail = false;
				break;
			}
		}
		if (isAvail) {
			res[src] = i + 1;
			break;
		}
	}

	for (auto nbr : adj[src]) {
		if (res[nbr] == 0)  f(nbr, adj, res);
	}
	return;
}

vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
	vector<int> adj[n];
	for (auto it : paths) {
		int a = it[0] - 1;
		int b = it[1] - 1;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	vector<int> res(n, 0);
	// Simple DFS hence TC = O(V+E) SC = O(V+E)
	for (int i = 0; i < n; i++) {
		if (res[i] == 0) {
			f(i, adj, res);
		}
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