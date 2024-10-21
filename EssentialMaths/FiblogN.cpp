#include<bits/stdc++.h>
using namespace std;

int fibRec(int n,int &next){
	if(n==0){next=1;return 0;}
	int nb2p1;
	int nb2=fibRec(n/2,nb2p1);
	int a=nb2*(2*nb2p1-nb2);
	int b=nb2p1*nb2p1+nb2*nb2;
	if(n%2==0){
		next=b;
		return a;
	}
	else{
		next=a+b;
		return b;
	}
}

int fib(int n){
	int next;
	return fibRec(n,next);
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<fib(n)<<endl;
	}
	return 0;
}