#include<bits/stdc++.h>
using namespace std;

void previousGreaterElement(int arr[],int n){
	stack<int> s;
	s.push(0);
	for(int i=0;i<n;i++){
		while(s.empty()==false && arr[s.top()]<=arr[i]){s.pop();}
		int prevlargest=(s.empty())?-1:arr[s.top()];
		cout<<prevlargest<<" ";
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
	previousGreaterElement(arr,n);
	return 0;
}