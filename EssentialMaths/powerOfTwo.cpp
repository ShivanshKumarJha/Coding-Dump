#include<bits/stdc++.h>
using namespace std;

bool powerOfTwo(int n){
	if(n==0){return false;}
	return ((n&(n-1))==0);
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<powerOfTwo(n)<<endl;
	}
	return 0;
}