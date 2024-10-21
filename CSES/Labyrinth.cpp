#include<bits/stdc++.h>
using namespace std;

vector<pair<string,pair<int,int>>> dir = {{"U",{-1,0}},{"R",{0,1}},{"D",{1,0}},{"L",{0,-1}}};

string bfs(int row,int col,vector<vector<char>>& graph,vector<vector<int>>& vis,int n,int m){
    vis[row][col] = 1;
    queue<pair<string,pair<int,int>>> q;
    q.push({"",{row,col}});

    while(!q.empty()){
        auto curr = q.front();
        q.pop();
        string s = curr.first;
        int r = curr.second.first;
        int c = curr.second.second;
        if(graph[r][c] == 'B') return curr.first;
        for(auto nbr:dir){
            int nRow = r + nbr.second.first;
            int nCol = c + nbr.second.second;
            if(nRow>=0 && nCol>=0 && nRow<n && nCol<m && graph[nRow][nCol]!='#' && !vis[nRow][nCol]){
                q.push({s+nbr.first,{nRow,nCol}});
                vis[nRow][nCol] = 1;
            }
        }
    }
    return "";
}

int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<char>> graph(n,vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>graph[i][j];
        }
    }

    string res;
    vector<vector<int>> vis(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(graph[i][j]=='A'){
                res = bfs(i,j,graph,vis,n,m);
            }
        }
    }
    if(res.size()) cout << "YES\n" << res.size() << "\n" << res << "\n";
    else cout << "NO\n";
    return 0;
}