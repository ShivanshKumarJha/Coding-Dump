#include<bits/stdc++.h>
using namespace std;

void keepIndex(int a[],int n){
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++){
		v.push_back({a[i],i});
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++){
		cout<<v[i].first<<" "<<v[i].second<<endl;
	}
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	keepIndex(a,n);
	return 0;
}