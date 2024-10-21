#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> dir = {{-1,0},{0,1},{1,0},{0,-1}};

void dfs(int row,int col,vector<vector<char>>& mat,vector<vector<int>>& vis){
	vis[row][col] = 1;
	int n = mat.size();
	int m = mat[0].size();

	for(auto nbr:dir){
		int nRow = row + nbr.first;
		int nCol = col + nbr.second;
		if(nRow>=0 && nCol>=0 && nRow<n && nCol<m && !vis[nRow][nCol] && mat[nRow][nCol]=='O') dfs(nRow,nCol,mat,vis);
	}
}

vector<vector<char>> fill(int n, int m, vector<vector<char>> mat){
    // code here
    vector<vector<int>> vis(n,vector<int>(m,0));

    for(int i=0;i<n;i++){
    	// first Column 
    	if(mat[i][0]=='O' && !vis[i][0]) dfs(i,0,mat,vis);

    	// last Column
    	if(mat[i][m-1]=='O' && !vis[i][m-1]) dfs(i,m-1,mat,vis);
    }

    for(int j=0;j<m;j++){
    	// first Row
    	if(mat[0][j]=='O' && !vis[0][j]) dfs(0,j,mat,vis);

    	// last Row
    	if(mat[n-1][j]=='O' && !vis[n-1][j]) dfs(n-1,j,mat,vis);
    }

    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		if(vis[i][j]==1 && mat[i][j]=='O') mat[i][j]='X';
    	}
    }

    return mat;
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