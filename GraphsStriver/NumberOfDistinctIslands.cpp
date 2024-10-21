#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> dir = {{-1,0},{0,1},{1,0},{0,-1}};

void dfs(int row,int col,vector<pair<int,int>>& vec,vector<vector<int>>& grid,vector<vector<int>>& vis,int xb,int yb){
	int n = grid.size();
    int m = grid[0].size();

	vis[row][col] = 1;
	vec.push_back({row-xb,col-yb});

	for(auto nbr:dir){
		int nRow = row + nbr.first;
		int nCol = col + nbr.second;

		if(nRow>=0 && nCol>=0 && nRow<n && nCol<m && !vis[nRow][nCol] && grid[nRow][nCol]==1){
			dfs(nRow,nCol,vec,grid,vis,xb,yb);
		}
	}
}

int countDistinctIslands(vector<vector<int>>& grid) {
    // code here
    int n = grid.size();
    int m = grid[0].size();

    vector<vector<int>> vis(n,vector<int>(m,0));
    set<vector<pair<int,int>>> s;

    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		if(!vis[i][j] && grid[i][j]==1){
    			vector<pair<int,int>> vec;
    			dfs(i,j,vec,grid,vis,i,j);
    			s.insert(vec);
    		}
    	}
    }
    return s.size();
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