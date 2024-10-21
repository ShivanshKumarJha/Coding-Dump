#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

vector<vector<pair<int,int>>> adj;
vector<int> ans;

void djik(int src,int d,int n){
    vector<int> dist(n,1e9);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,src});  //dis,src

    while(!pq.empty()){
        auto curr = pq.top();
        pq.pop();
        int dis = curr.first;
        int node = curr.second;

        for(auto nbr:adj[node]){
            int adjNode = nbr.first;
            int edgeWt = nbr.second;
            if(dis + edgeWt < dist[adjNode]){
                dist[adjNode] = dis + edgeWt;
                pq.push({dist[adjNode],adjNode});
            }
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(i==src) continue;
        else if(dist[i]<=d) cnt++;
    }
    ans[src] = cnt;
}

int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold){
    adj.resize(n);
    ans.resize(n,0);
    for(auto &it : edges){
        adj[it[0]].push_back({it[1],it[2]});
        adj[it[1]].push_back({it[0],it[2]});
    }

    for(int i=0;i<n;i++){
        djik(i,distanceThreshold,n);
    }
    int prev=0,res=ans[0];
    for(int i=1;i<n;i++){
        if(ans[i] <= res) {prev = i;res = ans[i];}
    }
    return prev;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	return 0;
}