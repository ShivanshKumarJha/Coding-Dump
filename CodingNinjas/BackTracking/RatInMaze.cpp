#include<bits/stdc++.h>
using namespace std;

void printSolution(int **solution,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<solution[i][j]<<" ";
		}
	}
	cout<<endl;
}

void mazeHelp(int board[20][20],int n,int **solution,int x,int y){
	if(x<0 || x>=n || y<0 || y>=n || solution[x][y]==1 || board[x][y]==0){return;}

	if(x==n-1 && y==n-1){
		solution[x][y]=1;
		printSolution(solution,n);
		solution[x][y]=0;
		return;	
	}

	solution[x][y]=1;
	mazeHelp(board,n,solution,x-1,y);
	mazeHelp(board,n,solution,x+1,y);
	mazeHelp(board,n,solution,x,y-1);
	mazeHelp(board,n,solution,x,y+1);
	solution[x][y]=0;
}

void ratInAMaze(int maze[20][20],int n){
	int **solution=new int*[n];
	for(int i=0;i<n;i++){
		solution[i]=new int[n];
	}
	mazeHelp(maze,n,solution,0,0);
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n;cin>>n;
	int maze[20][20];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>maze[i][j];
		}
	}
	ratInAMaze(maze, n);
	return 0;
}