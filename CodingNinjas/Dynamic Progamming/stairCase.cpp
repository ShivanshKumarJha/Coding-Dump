#include<bits/stdc++.h>
using namespace std;
int MOD=(pow(10,9))+7;

long Staircase(int n){
	long *dp=new long[n+1];

	if(n==0){return 1;}
	if(n==1 || n==2){return n;}

	dp[0]=1;dp[1]=1;dp[2]=2;
	for(int i=3;i<=n;i++){
		dp[i]=((long)(dp[i-1]%MOD)+(long)(dp[i-2]%MOD)+(long)(dp[i-3]%MOD))%MOD;
	}
	return dp[n];
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n;
	cin>>n;
	cout<<Staircase(n)%MOD<<endl;
	return 0;
}