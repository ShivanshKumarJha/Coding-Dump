#include<bits/stdc++.h>
using namespace std;

bool dfs(int src,vector<int> adj[],vector<int>& vis,vector<int>& path){
	vis[src] = 1;
	path[src] = 1;

	for(auto nbr:adj[src]){
		if(!vis[nbr]){
			if(dfs(nbr,adj,vis,path)) return true;
		}
		else if(path[nbr]) return true;
	}
	path[src] = 0;
	return false;
}

bool isCyclic(int V, vector<int> adj[]) {
    // code here
	vector<int> vis(V,0);
	vector<int> path(V,0);

	for(int i=0;i<V;i++){
		if(!vis[i]){
			if(dfs(i,adj,vis,path)) return true;
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