#include<bits/stdc++.h>
using namespace std;

int minCostPath(int input[3][4],int m,int n){
	int **output=new int*[m];
	for(int i=0;i<m;i++){
		output[i]=new int[n];
	}

	output[m-1][n-1]=input[m-1][n-1];

	//Fill Last Row(right to left)
	for(int j=n-2;j>=0;j--){
		output[m-1][j]=output[m-1][j+1]+input[m-1][j];
	}

	//Fill Last Column(bottom to top)
	for(int j=m-2;j>=0;j--){
		output[j][n-1]=output[j+1][n-1]+input[j][n-1];
	}

	//Fill remaining cells
	for(int i=m-2;i>=0;i--){
		for(int j=n-2;j>=0;j--){
			output[i][j]=min(output[i+1][j],min(output[i][j+1],output[i+1][j+1]))+input[i][j];
		}
	}

	return output[0][0];
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int m,n;
	cin>>m>>n;
	int input[3][4];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>input[i][j];
		}
	}

	cout<<minCostPath(input,m,n)<<endl;
	return 0;
}