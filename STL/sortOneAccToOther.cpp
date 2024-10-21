#include<bits/stdc++.h>
using namespace std;

void sortChar(int a[],char b[],int n){
	pair<int,char> p[n];
	for(int i=0;i<n;i++){
		p[i]=make_pair(a[i],b[i]);
	}
	sort(p,p+n);
	for(int i=0;i<n;i++){
		cout<<p[i].second<<" ";
	}
	cout<<endl;
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n;cin>>n;
	int a[n];char b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	sortChar(a,b,n);
	return 0;
}