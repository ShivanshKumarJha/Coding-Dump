#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n;
	cin>>n;
	int a=0,b=1,c;
	for(int i=2;i<=n+2;i++){
		c=a+b;
		a=b;
		b=c;
	}
	cout<<c-1<<endl;
	return 0;
}