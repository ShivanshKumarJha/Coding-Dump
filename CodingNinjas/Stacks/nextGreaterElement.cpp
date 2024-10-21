#include<bits/stdc++.h>
using namespace std;

void nextGreaterElement(int arr[],int n){
	stack<int> s;
	s.push(n-1);
	for(int i=n-1;i>=0;i--){
		while(s.empty()==false && arr[s.top()]<=arr[i]){s.pop();}
		int GreaterElement=(s.empty())?-1:arr[s.top()];
		cout<<GreaterElement<<" ";
		s.push(i);
	}
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	nextGreaterElement(arr,n);
	return 0;
}