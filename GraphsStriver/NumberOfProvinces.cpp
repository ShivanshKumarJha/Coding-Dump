#include<bits/stdc++.h>
using namespace std;

void bfs(vector<int> adj[],vector<int>& vis,int node){
    queue<int> q;
	q.push(node);
	vis[node]=1;

	while(!q.empty()){
		int curr = q.front();
		q.pop();
		for(auto nbr:adj[curr]){
			if(!vis[nbr]){
				q.push(nbr);
				vis[nbr]=1;
			}
		}
	}
	return;
}
    
int numProvinces(vector<vector<int>> adj, int V) {
    // code here
    int n = adj.size();
    vector<int> vis(V,0);
    int count=0;
    vector<int> adjList[V];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(adj[i][j]==1 && i!=j) {adjList[i].push_back(j);}
        }
    }
    
    for(int i=0;i<V;i++){
    	if(!vis[i]) {bfs(adjList,vis,i);count++;}
    }
    return count;
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