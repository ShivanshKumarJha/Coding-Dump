#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

vector<vector<int>> dir = {{-1,0},{0,1},{1,0},{0,-1}};

// Space Complexity - O(N*M)
// Time Complexity - O(N*M*4*log(N*M))
int MinimumEffort(vector<vector<int>>& heights) {
    // Code here
    int n = heights.size();
    int m = heights[0].size();
    vector<vector<int>> effort(n,vector<int>(m,1e9));

    priority_queue<pair<int,pair<int,int>>,
    vector<pair<int,pair<int,int>>>,
    greater<pair<int,pair<int,int>>>> pq;
    pq.push({0,{0,0}});

    while(!pq.empty()){
    	auto curr = pq.top();
    	pq.pop();

    	int prevEffort = curr.first;
    	int r = curr.second.first;
    	int c = curr.second.second;
    	if(r == n-1 && c == m-1) return prevEffort;

    	for(auto nbr:dir){
    		int nRow = r + nbr[0];
    		int nCol = c + nbr[1];
    		if(nRow>=0 && nRow<n && nCol>=0 && nCol<m){
    			int newEffort = max(abs(heights[r][c]-heights[nRow][nCol]),prevEffort);
    			if(newEffort < effort[nRow][nCol]){
    				effort[nRow][nCol] = newEffort;
    				pq.push({newEffort,{nRow,nCol}});
    			}
    		} 
    	}
    }
    return 0;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	return 0;
}