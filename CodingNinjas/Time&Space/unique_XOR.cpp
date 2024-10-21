#include<bits/stdc++.h>
using namespace std;

int findUnique(int *arr, int n){
	int unique=0;
	for(int i=0;i<n;i++){
		unique=unique^arr[i];
	}
	return unique;
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<findUnique(arr,n)<<endl;
	return 0;
}