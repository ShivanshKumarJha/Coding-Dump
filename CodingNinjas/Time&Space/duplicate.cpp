#include<bits/stdc++.h>
using namespace std;

int findDuplicate(int *arr,int n){
	int Original_Sum=0;
	int Given_Sum=0;
	for(int i=0;i<n;i++){
		Given_Sum+=arr[i];
	}
	for(int i=0;i<n-1;i++){
		Original_Sum+=i;
	}
	return Given_Sum-Original_Sum;
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<findDuplicate(arr,n)<<endl;
	return 0;
}