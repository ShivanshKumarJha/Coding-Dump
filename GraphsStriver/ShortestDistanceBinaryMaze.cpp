#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

vector<vector<int>> dir = {{-1,0},{0,1},{1,0},{0,-1}};
  
int bfs(int n,int m,vector<vector<int>> adj,vector<vector<int>>& vis,
pair<int,int> src,pair<int,int> end){
    int x = end.first;
    int y = end.second;
    
    queue<pair<pair<int,int>,int>> q;
    
    q.push({{src.first,src.second},0});
    vis[src.first][src.second] = 0;
    
    while(!q.empty()){
        auto curr = q.front();
        q.pop();
        
        int row = curr.first.first;
        int col = curr.first.second;
        int dist = curr.second;
        if(row==x && col==y) return vis[x][y];
        
        for(auto nbr:dir){
            int nRow = row + nbr[0];
            int nCol = col + nbr[1];
            if(nRow>=0 && nRow<n && nCol>=0 && nCol<m && adj[nRow][nCol]==1){
                if(dist + 1 < vis[nRow][nCol]){
                    vis[nRow][nCol] = dist + 1;
                    q.push({{nRow,nCol},dist+1});
                }    
            }
        }
    }
    return -1;
}

int shortestPath(vector<vector<int>> &A, pair<int, int> source,
pair<int, int> destination) {
    // code here
    if(source == destination) return 0;
    int n = A.size();
    int m = A[0].size();
    vector<vector<int>> vis(n,vector<int>(m,1e9));
    int ans = bfs(n,m,A,vis,source,destination);
    return ans;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	return 0;
}