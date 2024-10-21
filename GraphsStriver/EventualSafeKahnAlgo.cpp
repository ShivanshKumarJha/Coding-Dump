#include<bits/stdc++.h>
using namespace std;

vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
    // code here
    vector<int> adjRev[V];
    int indegree[V] = {0};

    for(int i=0;i<V;i++){
    	for(auto nbr:adj[i]){
    		adjRev[nbr].push_back(i);
    		indegree[i]++;
    	}
    }

    queue<int> q;
    vector<int> safeNodes;
    for(int i=0;i<V;i++){
    	if(indegree[i]==0) q.push(i);
    }

    while(!q.empty()){
    	int curr = q.front();
    	q.pop();
    	safeNodes.push_back(curr);

    	for(auto nbr:adjRev[curr]){
    		indegree[nbr]--;
    		if(indegree[nbr]==0) q.push(nbr);
    	}
    }
    sort(safeNodes.begin(),safeNodes.end());
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