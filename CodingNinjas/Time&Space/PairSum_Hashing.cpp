#include<bits/stdc++.h>
using namespace std;

int pairSum(int *arr, int n, int num)
{
	//Write your code here
	int a[10000]={0};
	for(int i=0;i<n;i++){
		a[arr[i]]++;
	}
	int count=0;
	for(int i=0;i<n;i++){
		count+=a[num-arr[i]];
		if(num-arr[i]==arr[i]){count--;}
	}
	return count/2;
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;
	cout<<pairSum(arr,n,target)<<endl;
	return 0;
}