#include<bits/stdc++.h>
using namespace std;

bool isKthSet(int n,int k){
	n=n>>(k-1);
	return (n&1);
}

int main(){
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);

	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<boolalpha<<isKthSet(n,k)<<endl;
	}
	return 0;
}