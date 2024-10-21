#include<bits/stdc++.h>
using namespace std;

void stockSpan(int arr[],int n){
	stack<int> s;
	s.push(0);
	for(int i=0;i<n;i++){
		while(s.empty()==false && arr[s.top()]<=arr[i]){s.pop();}
		int span=(s.empty())?(i+1):(i-s.top());
		cout<<span<<" ";
		s.push(i);
	}
}

int main(){

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	stockSpan(arr,n);
	return 0;
}