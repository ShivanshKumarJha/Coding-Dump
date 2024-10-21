#include<bits/stdc++.h>
using namespace std;

int countDistinctWays(int nStairs,vector<int> &dp){
    if(nStairs==0 || nStairs==1) return 1;
    if(dp[nStairs]!=-1) return dp[nStairs];

    return dp[nStairs]=countDistinctWays(nStairs-1,dp)+countDistinctWays(nStairs-2,dp);
}

int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<countDistinctWays(n,dp)<<endl;
    return 0;
}