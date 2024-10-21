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

int numProvinces(vector<vector<int>> adj, int V){
	DisjointSet ds(V);
	for(int i=0;i<V;i++){
		for(int j=0;j<V;j++){
			if(adj[i][j] == 1){
				ds.unionBySize(i,j);
			}
		}
	}
	int cnt = 0;
	for(int i=0;i<V;i++){
		if(ds.parent[i] == i) cnt++;
	}
	return cnt;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	
	return 0;
}