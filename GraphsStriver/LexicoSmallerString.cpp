#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

class DisjointSet {
public:
	vector<int> rank, parent, size;
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

	void unionBySize(int u, int v) {
		int ulp_u = findUPar(u);
		int ulp_v = findUPar(v);
		if (ulp_u == ulp_v) return;

		parent[ulp_v] = ulp_u;
		size[ulp_u] += size[ulp_v];
	}
};

class Solution {
public:
	string smallestEquivalentString(string s1, string s2, string baseStr) {
		DisjointSet ds(26);
		for (int i = 0; i < s1.size(); i++) {
			int ch1 = s1[i] - 'a';
			int ch2 = s2[i] - 'a';

			int parentCh1 = ds.findUPar(ch1);
			int parentCh2 = ds.findUPar(ch2);

			if (parentCh1 > parentCh2) {
				ds.unionBySize(parentCh2, parentCh1);
			}
			else {
				ds.unionBySize(parentCh1, parentCh2);
			}
		}

		string res = "";
		for (int i = 0; i < baseStr.size(); i++) {
			int parent = ds.findUPar(baseStr[i] - 'a');
			res += (parent + 'a');
		}
		return res;
	}
};


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	return 0;
}