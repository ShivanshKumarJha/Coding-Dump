#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int networkDelayTime(vector<vector<int>>& times, int n, int k) {
    vector<vector<pair<int,int>>> adj(n+1);
    for(auto it:times){
        adj[it[0]].push_back({it[1],it[2]});
    }

    vector<int> time(n+1,1e9);
    priority_queue<pair<int,int>,vector<pair<int,int>>,
    greater<pair<int,int>>> pq;
    pq.push({0,k}); //time,src --> we have to take the path having less time
    time[k] = 0;

    while(!pq.empty()){
        auto curr = pq.top();
        pq.pop();
        int currTime = curr.first;
        int node = curr.second;

        for(auto nbr:adj[node]){
            int adjNode = nbr.first;
            int edgeWt = nbr.second;
            if(currTime + edgeWt < time[adjNode]){
                time[adjNode] = currTime + edgeWt;
                pq.push({time[adjNode],adjNode});
            } 
        }
    }

    int ans=INT_MIN;
    for(int i=1;i<=n;i++){
        if(time[i] == 1e9) return -1;
        ans = max(ans,time[i]);
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