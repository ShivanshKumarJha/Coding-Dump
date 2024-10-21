#include<bits/stdc++.h>
using namespace std;

int maxPrimeFactor(int n){
	int res=-1;
	for(int i=2;i*i<=n;i++){
		while(n%i==0){
			res=i;
			n=n/i;
		}
	}
	return (n>1)?n:res;
}

int maxPower(int n,int fact){
	int maxPf=maxPrimeFactor(n);
	int res=0;
	while(fact>0){
		fact/=maxPf;
		res+=fact;
	}
	return res;
}	

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n,fact;
	cin>>n>>fact;
	cout<<maxPower(n,fact)<<endl;
	return 0;
}