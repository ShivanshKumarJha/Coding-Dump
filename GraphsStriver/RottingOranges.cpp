#include<bits/stdc++.h>
using namespace std;

//Function to find minimum time required to rot all oranges.
int orangesRotting(vector<vector<int>>& grid){
    // Code here
    int n = grid.size();
    int m = grid[0].size();

    // {{row,column},time}
    queue<pair<pair<int,int>,int>> q;
    vector<vector<int>> vis(n,vector<int>(m,0));

    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		if(grid[i][j]==2){
    			q.push({{i,j},0});
    			vis[i][j]=1;
    		}
    	}
    }

    vector<pair<int,int>> dir = {{-1,0},{0,1},{1,0},{0,-1}};
    int res = 0;

    while(!q.empty()){
    	auto curr = q.front();
    	q.pop();

    	int row = curr.first.first;
    	int col = curr.first.second;
    	int time = curr.second;

    	res = max(res,time);
    	for(auto nbr:dir){
    		int nRow = row + nbr.first;
    		int nCol = col + nbr.second;
    		if(nRow>=0 && nRow<n && nCol>=0 && nCol<m && grid[nRow][nCol]==1 && vis[nRow][nCol]==0){
    			q.push({{nRow,nCol},time+1});
    			vis[nRow][nCol]=1;
    		}
    	}
    }
    
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		if(vis[i][j]!=1 && grid[i][j]==1) return -1;
    	}
    }
    return res;
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