#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
	vector<int> adj[N];
	for(auto it:edges){
		int a = it[0];
		int b = it[1];
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	vector<int> dist(N,-1);
	queue<int> q;
	q.push(src);
	dist[src] = 0;

	while(!q.empty()){
		int curr = q.front();
		q.pop();

		for(auto nbr:adj[curr]){
			if(dist[nbr] == -1){
				dist[nbr] = dist[curr] + 1;
				q.push(nbr);
			}
		}
	}
	return dist;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	return 0;
}