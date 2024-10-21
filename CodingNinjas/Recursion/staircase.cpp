#include<bits/stdc++.h>
using namespace std;

int staircase(int n){
	int smallOutput=0;
	if(n==0){++smallOutput;return smallOutput;}
	else if(n>=3){
		return staircase(n-2)+staircase(n-1)+staircase(n-3);
	}
	else if(n==2){
		return staircase(n-1)+staircase(n-2);
	}
	else if(n==1){
		return staircase(n-1);
	}
	return smallOutput;
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n;cin>>n;
	cout<<staircase(4)<<endl;
	return 0;
}