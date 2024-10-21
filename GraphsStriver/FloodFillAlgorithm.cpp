#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> dir = {{-1,0},{0,1},{1,0},{0,-1}};
void dfs(vector<vector<int>> image,vector<vector<int>>& ans,int sr,int sc,int iniColor,int newColor){
    int n = image.size();
    int m = image[0].size();
    ans[sr][sc]=newColor;
    
    for(auto nbr:dir){
        int nRow = sr+nbr.first;
        int nCol = sc+nbr.second;
        if(nRow>=0 && nCol>=0 && nRow<n && nCol<m && image[nRow][nCol]==iniColor && ans[nRow][nCol]!=newColor){
            dfs(image,ans,nRow,nCol,iniColor,newColor);
        }
    }
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor){
    // Code here 
    int n=image.size();
    int m=image[0].size();
    
    vector<vector<int>> ans = image;
    int iniColor = image[sr][sc];
    dfs(image,ans,sr,sc,iniColor,newColor);
    return ans;
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