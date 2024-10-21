#include<bits/stdc++.h>
using namespace std;

bool dfs(int src,vector<int> adj[],vector<int>& vis,vector<int>& path,int check[]){
	vis[src] = 1;
	path[src] = 1;
    check[src] = 0;
	for(auto nbr:adj[src]){
		if(!vis[nbr]){
			if(dfs(nbr,adj,vis,path,check)){
			    check[src] = 0;
		        return true;
			}
		}
		else if(path[nbr]){
            check[src] = 0;    		   
		    return true;
		}
	}
	check[src] = 1;
	path[src] = 0;
	return false;
}

vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
    // code here
    vector<int> vis(V,0);
	vector<int> path(V,0);
    vector<int> safeNodes;
    int check[V] = {0};

	for(int i=0;i<V;i++){
		if(!vis[i]){
			dfs(i,adj,vis,path,check);
		}
	}
	
	for(int i=0;i<V;i++){
	    if(check[i]==1) safeNodes.push_back(i);
	}
	return safeNodes;
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