#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int countPaths(int n, vector<vector<int>>& roads) {
    // code here
    vector<vector<int>> adj[n];
    int mod = 1e9+7;
    for(auto it:roads){
    	adj[it[0]].push_back({it[1],it[2]});
    	adj[it[1]].push_back({it[0],it[2]});
    }

    vector<ll> dist(n,1e18);
    vector<int> ways(n,0);

    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq;
    pq.push({0,0});
    dist[0] = 0;
    ways[0] = 1;

    while(!pq.empty()){
    	ll dis = pq.top().first;
    	int node = pq.top().second;
    	pq.pop();

    	for(auto nbr:adj[node]){
    		int adjNode = nbr[0];
    		int edgeWt = nbr[1];
    		if(dis + edgeWt < dist[adjNode]){
    			dist[adjNode] = dis + edgeWt;
    			pq.push({dist[adjNode],adjNode});
    			ways[adjNode] = ways[node] % mod;
    		}
    		else if(dis + edgeWt ==	 dist[adjNode]){
    			ways[adjNode] = (ways[adjNode] + ways[node]) % mod;
    		}
    	}
    }
    return ways[n-1] % mod;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	return 0;
}