#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

class DisjointSet {
	vector<int> rank, parent, size;

public:
	DisjointSet(int n) {
		rank.resize(n + 1, 0);
		parent.resize(n + 1);
		size.resize(n + 1, 1);
		for (int i = 0; i <= n; i++) {parent[i] = i;}
	}

	int findUPar(int node) {
		if (node == parent[node]) return node;
		return parent[node] = findUPar(parent[node]);
	}

	void unionByRank(int u, int v) {
		int ulp_u = findUPar(u);
		int ulp_v = findUPar(v);
		if (ulp_u == ulp_v) return;

		if (rank[ulp_u] < rank[ulp_v]) {
			parent[ulp_u] = ulp_v;
		}
		else if (rank[ulp_u] > rank[ulp_v]) {
			parent[ulp_v] = ulp_u;
		}
		else {
			parent[ulp_v] = ulp_u;
			rank[ulp_u]++;
		}
	}

	void unionBySize(int u, int v) {
		int ulp_u = findUPar(u);
		int ulp_v = findUPar(v);
		if (ulp_u == ulp_v) return;

		if (size[ulp_u] < size[ulp_v]) {
			parent[ulp_u] = ulp_v;
			size[ulp_v] += size[ulp_u];
		}
		else {
			parent[ulp_v] = ulp_u;
			size[ulp_u] += size[ulp_v];
		}
	}
};

int spanningTree(int V, vector<vector<int>> adj[]){
	vector<pair<int,pair<int,int>>> edges;
	for(int i=0;i<V;i++){
		for(auto it:adj[i]){
			int adjNode = it[0];
			int wt = it[1];
			int node = i;

			edges.push_back({wt,{i,adjNode}});
		}
	}

	DisjointSet ds(V);
	sort(edges.begin(),edges.end());
	int mstWt = 0;
	for(auto it:edges){
		int wt = it.first;
		int u = it.second.first;
		int v = it.second.second;

		if(ds.findUPar(u) != ds.findUPar(v)){
			mstWt += wt;
			ds.unionBySize(u,v);
		}
	}
	return mstWt;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	
	return 0;
}