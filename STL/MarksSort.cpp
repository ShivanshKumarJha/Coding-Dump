#include<bits/stdc++.h>
using namespace std;

void marksSort(int roll[],int marks[],int n){
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++){
		v.push_back({marks[i],roll[i]});
	}
	sort(v.begin(),v.end(),greater<pair<int,int>>());
	for(int i=0;i<n;i++){
		cout<<v[i].second<<" "<<v[i].first<<endl;
	}
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n;cin>>n;
	int marks[n];int roll[n];
	for(int i=0;i<n;i++){
		cin>>marks[i];
	}
	for(int i=0;i<n;i++){
		cin>>roll[i];
	}
	marksSort(roll,marks,n);
	return 0;
}