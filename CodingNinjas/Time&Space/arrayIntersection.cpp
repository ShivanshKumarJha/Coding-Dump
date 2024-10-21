#include<bits/stdc++.h>
using namespace std;

void intersection(int *arr1, int *arr2, int n, int m) 
{
    //Write your code here
    int i=0,j=0;
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    while(i<n && j<m){
    	if(arr1[i]<arr2[j]){i++;}
    	else if(arr1[i]>arr2[j]){j++;}
    	else if(arr1[i]==arr2[j]){
    		cout<<arr1[i]<<" ";
    		i++;j++;
    	}
    }
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n,m;
	cin>>n;
	int arr1[n];
	for(int i=0;i<n;i++){
		cin>>arr1[n];
	}
	cin>>m;
	int arr2[m];
	for(int i=0;i<m;i++){
		cin>>arr2[m];
	}
	intersection(arr1,arr2,n,m);
	return 0;
}