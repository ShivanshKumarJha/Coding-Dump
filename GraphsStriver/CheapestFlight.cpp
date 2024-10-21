#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

// Using Queue
int CheapestFLight(int n, vector<vector<int>>& flights, int src, int dst, int K)  {
    // Code here
    vector<vector<int>> adj[n];
    vector<int> price(n,INT_MAX);
    
    for(auto it:flights){
        adj[it[0]].push_back({it[1],it[2]});
    }
    
    queue<pair<int,pair<int,int>>> q;
    q.push({0,{src,0}});
    price[src] = 0;
    
    while(!q.empty()){
        auto curr = q.front();
        q.pop();
        
        int cost = curr.first;
        int node = curr.second.first;
        int stop = curr.second.second;
        if(stop > K) continue;
        
        for(auto nbr:adj[node]){
            int adjNode = nbr[0];
            int edgeWt = nbr[1];
            if(cost + edgeWt < price[adjNode]){
            	price[adjNode] = cost + edgeWt;
            	q.push({price[adjNode],{adjNode,stop+1}});
            }
        }
    }

        return price[dst] == INT_MAX ? -1 : price[dst];
}

// Using Priority Queue
int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K){
    vector<vector<int>> adj[n];
    vector<int> price(n,INT_MAX);
    
    for(auto it:flights){
        adj[it[0]].push_back({it[1],it[2]});
    }
    
    // {stop,{node,cost}} instead of {cost,{node,stop}} because it will taken 
    // into account the least cost price which may have more than k stops
    priority_queue<pair<int,pair<int,int>>,
    vector<pair<int,pair<int,int>>>,
    greater<pair<int,pair<int,int>>>> pq;
    
    pq.push({0,{src,0}});
    price[src] = 0;
    
    while(!pq.empty()){
        auto curr = pq.top();
        pq.pop();
        
        int stop = curr.first;
        int node = curr.second.first;
        int cost = curr.second.second;
        if(stop>K) break;
        
        for(auto nbr:adj[node]){
            int adjNode = nbr[0];
            int edgeWt = nbr[1];
            if(cost + edgeWt < price[adjNode]){
            	price[adjNode] = cost + edgeWt;
            	pq.push({stop+1,{adjNode,price[adjNode]}});
            }
        }
    }

    return price[dst] == INT_MAX ? -1 : price[dst];
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	return 0;
}