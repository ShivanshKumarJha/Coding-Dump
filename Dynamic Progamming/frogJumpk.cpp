#include<bits/stdc++.h>
using namespace std;

int frogJumpsK(int idx,vector<int> costs,int k){
	if(idx==0) return 0;
	int ans=INT_MAX;
	for(int i=1;i<=k;i++){
		if(idx>=i) ans=min(ans,frogJumpsK(idx-k,costs,k))+abs(costs[idx]-costs[idx-k]); 		
	}
	return ans;
}

int frogJumpsK_memo(int idx,vector<int> costs,int k,vector<int>& dp){
	if(idx==0) return 0;

	if(dp[idx]!=-1) return dp[idx];

	int ans=INT_MAX;
	for(int i=1;i<=k;i++){
		if(idx>=i) ans=min(ans,frogJumpsK_memo(idx-k,costs,k,dp))+abs(costs[idx]-costs[idx-k]); 	
	}

	return dp[idx]=ans;
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	vector<int> costs;
	int n=costs.size();
	int k;

	vector<int> dp(n+1,-1);
	dp[0]=0;dp[1]=0;
	for(int i=2;i<=n;i++){
		dp[i]=INT_MAX;
		for(int j=1;j<=k;j++){
			if(j<=i) dp[i]=min(dp[i],dp[i-k])+abs(costs[i]-costs[i-j]);
		}
	}
	cout<<dp[n]<<endl;
	return 0;
}