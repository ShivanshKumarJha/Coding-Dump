#include<bits/stdc++.h>
using namespace std;

int maxProfit(int *arr,int n){
	sort(arr,arr+n);
	int a[100000]={0};
	int k=0;
	for(int i=0;i<n;i++){
		a[k++]=(n-i)*arr[i];
	}
	int max=a[0];
	for(int i=0;i<100000;i++){
		if(a[i]>max && a[i]!=0){max=a[i];}
		if(a[i]==0){break;}
	}
	return max;
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
	cout<<maxProfit(arr,n)<<endl;
	return 0;
}