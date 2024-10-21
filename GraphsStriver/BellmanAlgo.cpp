#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S){
    // Code here
    vector<int> dist(V,1e8);
    dist[S] = 0;
    for(int i=0;i<V-1;i++){
    	for(auto it:edges){
			int u = it[0];
    		int v = it[1];
    		int wt = it[2];
    		if(dist[u] != 1e8 && dist[u] + wt < dist[v]){
    			dist[v] = dist[u] + wt;
    		}
    	}
    }

    // Nth relaxation to check for the negative cycle
    for(auto it:edges){
    	int u = it[0];
    	int v = it[1];
    	int wt = it[2];
    	if(dist[u] != 1e8 && dist[u] + wt < dist[v]) return {-1};
    }
    return dist;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	return 0;
}