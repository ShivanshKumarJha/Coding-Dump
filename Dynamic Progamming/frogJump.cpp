#include<bits/stdc++.h>
using namespace std;

int frogJumps(int idx,vector<int> costs){
	if(idx==0) return 0;

	int fs=frogJumps(idx-1,costs)+abs(costs[idx]-costs[idx-1]);
	int ss=INT_MAX;
	if(idx>1) ss=frogJumps(idx-2,costs)+abs(costs[idx]-costs[idx-2]);
	return min(fs,ss);
}

int frogJumps_memo(int idx,vector<int> costs,vector<int>& dp){
	if(idx==0) return 0;

	if(dp[idx]!=-1) return dp[idx];
	int fs=frogJumps_memo(idx-1,costs,dp)+abs(costs[idx]-costs[idx-1]);
	int ss=INT_MAX;
	if(idx>1) ss=frogJumps_memo(idx-2,costs,dp)+abs(costs[idx]-costs[idx-2]);
	return dp[idx]=min(fs,ss);
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	vector<int> costs;
	int n=costs.size();

	vector<int> dp(n+1,-1);
	dp[0]=0;dp[1]=0;
	for(int i=2;i<=n;i++){
		dp[i]=INT_MAX;
		int fs=dp[i-1]+abs(costs[i]-costs[i-1]);
		int ss=dp[i-2]+abs(costs[i]-costs[i-2]);
		dp[i]=min(fs,ss);
	}
	cout<<dp[n]<<endl;

	//Space Optimised Solutions
	int prev2=0,prev=0;
	for(int i=1;i<n;i++){
		int fs=prev+abs(costs[i]-costs[i-1]);
		int ss=INT_MAX;
		if(i>1) ss=prev2+abs(costs[i]-costs[i-2]);

		int curr=min(fs,ss);
		prev2=prev;
		prev=curr;
	}
	return 0;
}