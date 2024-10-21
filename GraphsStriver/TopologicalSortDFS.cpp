#include<bits/stdc++.h>
using namespace std;

void dfs(int src,vector<int> adj[],vector<int>& vis,stack<int>& st){
    vis[src] = 1;
    for(auto nbr:adj[src]){
        if(!vis[nbr]) dfs(nbr,adj,vis,st);
    }
    st.push(src);
    return;
}

vector<int> topoSort(int V, vector<int> adj[]){
    // code here
    vector<int> vis(V,0);
    vector<int> res;
    stack<int> st;

    for(int i=0;i<V;i++){
        if(!vis[i]) dfs(i,adj,vis,st);
    }
    
    while(!st.empty()){
    	res.push_back(st.top());
    	st.pop();
    }
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