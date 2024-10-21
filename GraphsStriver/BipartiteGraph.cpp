#include<bits/stdc++.h>
using namespace std;

bool bfs(int src,vector<int> adj[],vector<int>& color){
    queue<int> q;
    q.push(src);
    color[src]=0;
    
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        for(auto nbr:adj[curr]){
            if(color[nbr] == -1){
                color[nbr] = !color[curr];
                q.push(nbr);
            }
            else if(color[curr]==color[nbr]) return false;
        }
    }
    return true;
}

bool dfs(int src,vector<int> adj[],vector<int>& color,int currColor){
    color[src] = currColor;
    
    for(auto nbr:adj[src]){
        if(color[nbr] == -1){
            if(dfs(nbr,adj,color,!currColor) == false) return false;
        }
        else if(color[src]==color[nbr]) return false;
    }
    return true;
}

bool isBipartite(int V, vector<int>adj[]){
    // Code here
    vector<int> color(V,-1);
    for(int i=0;i<V;i++){
        if(color[i] == -1){
           // if(bfs(i,adj,color) == false) return false;
            if(dfs(i,adj,color,0) == false) return false;
        }
    }
    return true;
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