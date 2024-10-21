#include<bits/stdc++.h>
using namespace std;

int fiboHelper(int n,int *ans){
	if(n<=1){return n;}
	if(ans[n]!=-1){return ans[n];}

	int a=fiboHelper(n-1,ans);
	int b=fiboHelper(n-2,ans);
	ans[n]=a+b;
	return ans[n];
}

int fib(int n){
	int *ans=new int[n+1];
	for(int i=0;i<=n;i++){
		ans[i]=-1;
	}
	return fiboHelper(n,ans);
}

int fib_2(int n){
	int *ans=new int[n+1];
	ans[0]=0;ans[1]=1;
	for(int i=2;i<=n;i++){
		ans[i]=ans[i-1]+ans[i-2];
	}
	return ans[n];
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n;cin>>n;
	cout<<fib_2(n)<<endl;
	return 0;
}