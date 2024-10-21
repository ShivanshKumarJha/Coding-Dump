#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> dir = {{-1,0},{0,1},{1,0},{0,-1}};

vector<vector<int>>nearest(vector<vector<int>>grid){
    // Code here
    int n = grid.size();
    int m = grid[0].size();

    vector<vector<int>> dist(n,vector<int>(m,0));
    vector<vector<int>> vis(n,vector<int>(m,0));
    queue<pair<pair<int,int>,int>> q;

    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		if(grid[i][j] == 1){
    			q.push({{i,j},0});
    			vis[i][j] = 1;
    		}
    	}
    }

    while(!q.empty()){
    	auto curr = q.front();
    	q.pop();

    	int row = curr.first.first;
    	int col = curr.first.second;
    	int steps = curr.second;
    	dist[row][col] = steps;

    	for(auto nbr:dir){
    		int nRow = row + nbr.first;
    		int nCol = col + nbr.second;
    		if(nRow>=0 && nRow<n && nCol>=0 && nCol<m && vis[nRow][nCol]==0){
    			q.push({{nRow,nCol},steps+1});
    			vis[nRow][nCol] = 1;
    		}
    	}
    }
    return dist;
}	


int main(){

	#ifndef ONLINE_JUDGE
		//for getting input from input.txt
		freopen("input.txt","r",stdin);
		//for writing output to output.txt
		freopen("output.txt","w",stdout);
	#endif
	
	
	return 0;
}