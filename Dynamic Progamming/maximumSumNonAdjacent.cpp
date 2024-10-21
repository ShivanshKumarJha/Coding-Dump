#include<bits/stdc++.h>
using namespace std;

int maxSumNonAdj(int idx,vector<int> v){
	if(idx==0) return v[idx];
	if(idx<0) return 0;

	int take=v[idx]+maxSumNonAdj(idx-2,v);
	int notTake=0+maxSumNonAdj(idx-1,v);
	return max(take,notTake);
}

int maxSumNonAdj_memo(int idx,vector<int> v,vector<int>& dp){
	if(idx==0) return v[idx];
	if(idx<0) return 0;

	if(dp[idx]!=-1) return dp[idx];
	int take=v[idx]+maxSumNonAdj(idx-2,v);
	int notTake=0+maxSumNonAdj(idx-1,v);
	return dp[idx]=max(take,notTake);
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n;
	vector<int> v;
	vector<int> dp(n,-1);

	dp[0]=v[0];
	for(int i=1;i<n;i++){
		int take=v[i]+(i>1)?dp[i-2]:0;
		int notTake=0+dp[i-1];
		dp[i]=max(take,notTake);
	}
	cout<<dp[n-1]<<endl;

	int prev2=0,prev=v[0];
	for(int i=1;i<n;i++){
		int take=v[i]+(i>1)?prev2:0;
		int notTake=0+prev;
		int curr=max(take,notTake);
		prev2=prev;
		prev=curr;
	}
	cout<<prev<<endl;

	return maxSumNonAdj(n-1,v);
	return maxSumNonAdj_memo(n-1,v,dp);
	return 0;
}