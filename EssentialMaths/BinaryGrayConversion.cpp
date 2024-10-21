#include<bits/stdc++.h>
using namespace std;

int gray(int x){
	return x^(x>>1);
}

int binary(int x){
	int res=0;
	while(x>0){
		res=res^x;
		x=x>>1;
	}
	return res;
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<gray(n)<<endl;
	}
	return 0;
}