#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

// Using sets
vector<int> dijkstra(int V, vector<vector<int>> adj[], int s)
{
	// Code here
	set<pair<int, int>> st;
	vector<int> dist(V, 1e9);

	dist[s] = 0;
	st.insert({0, s});

	while (!st.empty())
	{
		auto it = *(st.begin());
		int node = it.second;
		int dis = it.first;
		st.erase(it);

		for (auto nbr : adj[node])
		{
			int adjNode = nbr[0];
			int edgeWt = nbr[1];
			if (dis + edgeWt < dist[adjNode])
			{
				if (dist[adjNode] != 1e9)
					st.erase({dist[adjNode], adjNode});
				dist[adjNode] = dis + edgeWt;
				st.insert({dist[adjNode], adjNode});
			}
		}
	}
	return dist;
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	return 0;
}