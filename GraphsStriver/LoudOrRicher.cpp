#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet){
    int n = quiet.size();
    vector<int> indegree(n,0);
    vector<int> adj[n];
    vector<int> ans(n,1e9);

    // Creating the graph
    for(auto it:richer){
        adj[it[0]].push_back(it[1]);
        indegree[it[1]]++;
    }

    queue<int> q;
    // Pushing the nodes having indegree = 0
    for(int i=0;i<n;i++){
        ans[i] = i;
        if(indegree[i] == 0) q.push(i);
    }

    /* Topo Sort --> we do in decreasing order of the richness, means for the neighbour node, we check the quiet factor of 
    that node and the quiet factor for the parent node and update accordingly */
    while(!q.empty()){
        int curr = q.front();
        q.pop();

        for(auto nbr:adj[curr]){
            indegree[nbr]--;
            // Updating the quiet factor
            if(quiet[ans[nbr]] > quiet[ans[curr]]){
                ans[nbr] = ans[curr];
            }
            if(indegree[nbr] == 0) q.push(nbr);
        }
    }
    return ans;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	return 0;
}