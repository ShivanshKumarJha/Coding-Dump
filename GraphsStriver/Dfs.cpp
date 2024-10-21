#include<bits/stdc++.h>
using namespace std;

void dfs(int node,vector<int> adj[],vector<int> &vis,vector<int>& res){
	vis[node]=1;
	res.push_back(node);
	for(auto nbr:adj[node]){
		if(!vis[nbr]) dfs(nbr,adj,vis,res);
	}
	return;
}

vector<int> dfsOfGraph(int V, vector<int> adj[]) {
	// Code here
	vector<int> vis(V,0);
	vector<int> res;
	dfs(0,adj,vis,res);
	return res;
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