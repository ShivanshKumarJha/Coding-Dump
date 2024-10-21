#include<bits/stdc++.h>
using namespace std;

int BinaryStrings(int n){
	if(n==0 || n==1){return n+1;}
	return BinaryStrings(n-1)+BinaryStrings(n-2);
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n;
	cin>>n;
	cout<<BinaryStrings(n)<<endl;	
	return 0;
}