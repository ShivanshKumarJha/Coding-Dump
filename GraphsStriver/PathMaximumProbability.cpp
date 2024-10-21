#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

double maxProbability(int n, vector<vector<int>>& edges,vector<double>& succProb, int start_node, int end_node) {
    vector<vector<pair<int,double>>> adj(n);
    for(int i=0;i<edges.size();i++){
        int u = edges[i][0],v = edges[i][1];
        double wt = succProb[i];
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }

    vector<double> prob(n,0.0);
    prob[start_node] = 1.0;
    // creating the max heap to store the node having more probability at the top
    priority_queue<pair<double,int>> pq;
    pq.push({1.0,start_node});  //{probability,node}

    while(!pq.empty()){
        auto curr = pq.top();
        pq.pop();

        double currProb = curr.first;
        int node = curr.second;
        if(node == end_node) return currProb;
        if(prob[node] > currProb) continue;

        for(auto nbr:adj[node]){
            int adjNode = nbr.first;
            double edgeWt = nbr.second;
            if(currProb * edgeWt > prob[adjNode]){
                prob[adjNode] = currProb * edgeWt;
                pq.push({prob[adjNode],adjNode});
            }
        }
    }
    return 0.0;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	return 0;
}