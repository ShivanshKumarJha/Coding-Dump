#include<bits/stdc++.h>
using namespace std;

bool bfs(int src,vector<int>& vis,vector<int> adj[]){
	vis[src] = 1;
	queue<pair<int,int>> q;
	q.push({src,-1});

	while(!q.empty()){
		auto curr = q.front();
		q.pop();

		int node = curr.first;
		int parent = curr.second;

		for(auto nbr:adj[node]){
			if(!vis[nbr]){
				vis[nbr] = 1;
				q.push({nbr,node});
			}
			else if(nbr != parent) return true;
		}
	}
	return false;
}

bool isCycle(int V, vector<int> adj[]) {
    // Code here
    vector<int> vis(V,0);
    for(int i=0;i<V;i++){
    	if(!vis[i]){
    		if(bfs(i,vis,adj)) return true;
    	}
    }
    return false;
}

int main(){

	#ifndef ONLINE_JUDGE
		//for getting input from input.txt
		freopen("input.txt","r",stdin);
		//for writing output to output.txt
		freopen("output.txt","w",stdout);
	#endif
	
	
	return 0;
}