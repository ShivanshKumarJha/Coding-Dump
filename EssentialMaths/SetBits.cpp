#include<bits/stdc++.h>
using namespace std;

int table[256];
void initialize(){
    table[0]=0;
    for(int i=1;i<256;i++){
        table[i]=(i&1)+table[i/2];
    }
}

int setBits1(int n){
	int res=0;
	while(n>0){
		res+=(n&1);
		n=n>>1;
	}
	return res;
}

int setBits2(int n){
	int res=0;
	while(n>0){
		n=(n&(n-1));
		res++;
	}
	return res;
}

int setBits3(int n){
	int res=table[n&0xff];
	n=n>>8;
	res+=table[n&0xff];
	n=n>>8;
	res+=table[n&0xff];
	n=n>>8;
	res+=table[n&0xff];
	return res;
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int t;
	cin>>t;
	initialize();
	while(t--){
		int n;
		cin>>n;
		cout<<setBits1(n)<<endl;
		cout<<setBits2(n)<<endl;
		cout<<setBits3(n)<<endl;
	}
	return 0;
}