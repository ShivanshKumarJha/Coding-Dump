#include<bits/stdc++.h>
using namespace std;

int FIB(int n){
	if(n<=1){return n;}
	int a=0,b=1,c;
	for(int i=2;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
	}
	return c;
}

int SumSquaresFib(int n){
	if(n<=1){return n;}
	int fib1=FIB(n);
	int fib2=FIB(n+1);
	return fib1*fib2;
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n;
	cin>>n;
	cout<<SumSquaresFib(n)<<endl;
	return 0;
}