#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> dir= {{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1}};

void bfs(int i,int j,vector<vector<char>>& grid,vector<vector<int>>& vis){
	int n=grid.size();
	int m=grid[0].size();
	queue<pair<int,int>> q;
	q.push({i,j});
	vis[i][j]=1;

	while(!q.empty()){
		auto curr = q.front();
		q.pop();

		for(auto nbr:dir){
			int nRow=curr.first+nbr.first;
			int nCol=curr.second+nbr.second;
			if(nRow>=0 && nRow<n && nCol>=0 && nCol<m && !vis[nRow][nCol] && grid[nRow][nCol]!='0'){
				q.push({nRow,nCol});
				vis[nRow][nCol]=1;
			}
		}
	}
}

int numIslands(vector<vector<char>>& grid) {
    // Code here
    int n=grid.size();
    int m=grid[0].size();
    vector<vector<int>> vis(n,vector<int>(m,0));

    int count=0;
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		if(!vis[i][j] && grid[i][j]=='1'){
    			bfs(i,j,grid,vis);
    			count++;
    		}
    	}
    }
    return count;
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