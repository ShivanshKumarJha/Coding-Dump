#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

// ----------------------------------- Using Topological Sort ----------------------------------- 
void topoSort(int src,vector<pair<int,int>> adj[],int vis[],stack<int>& st){
	vis[src] = 1;
	for(auto nbr:adj[src]){
		if(!vis[nbr.first]) topoSort(nbr.first,adj,vis,st);
	}
	st.push(src);
}

vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
    // code here
    vector<pair<int,int>> adj[N];
    for(auto it:edges){
    	int u = it[0];
    	int v = it[1];
    	int w = it[2];
    	adj[u].push_back({v,w});
    }

    // Find the topo sort
    stack<int> st;
	int vis[N] = {0};

	for(int i=0;i<N;i++){
		if(!vis[i]) topoSort(i,adj,vis,st);
	} 

	vector<int> dist(N,1e9);
	dist[0] = 0;

	while(!st.empty()){
		int u = st.top();
		st.pop();

		for(auto it:adj[u]){
			int v = it.first;
			int w = it.second;

			// Relaxing the nodes
			if(dist[u]+w < dist[v]) dist[v] = dist[u]+w;
		}
	}

	for(int i=0;i<N;i++){
	    if(dist[i] == 1e9) dist[i]=-1;
	}
	return dist;
}
// ---------------------------------------------------------------------- 


// ----------------------------------- Using BFS Approach ----------------------------------- 
vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
    // code here
    vector<int>dist(N ,1e9);
    
    vector<vector<pair<int,int>>>adj(N);
    for(int i=0;i<edges.size();i++){
        adj[edges[i][0]].push_back({edges[i][1] , edges[i][2]});
    }
    
    dist[0]=0;
    queue<pair<int,int>>q;
    q.push({0,0});
    
    while(!q.empty()){
        auto curr = q.front();
        q.pop();
        
        int u = curr.first;
        int dis = curr.second;
        
        for(auto nbr: adj[u]){
            int v = nbr.first;
            int w = nbr.second;
            
            if(w+dis >= dist[v]) continue;
            dist[v] = w + dis;
            q.push({v,dist[v]});
        }
    }
    
    for(int i=0;i<N;i++){
        if(dist[i] == 1e9) dist[i]=-1;
    }
    return dist;
}
// ---------------------------------------------------------------------- 

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	return 0;
}