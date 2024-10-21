#include<bits/stdc++.h>
using namespace std;

int pairSum(int *arr,int si,int ei,int num){
	int pairNumber=0;
	while(si<ei){
		if(arr[si]+arr[ei]>num){ei--;}
		else if(arr[si]+arr[ei]<num){si++;}
		else{
			if(arr[si]==arr[ei]){
				pairNumber+= (((ei - si) + 1) * (ei - si)) / 2;
        		return pairNumber;
        	}
			int tempsi=si+1;
			int tempei=ei-1;
			while(tempsi<=tempei && arr[tempsi]==arr[si]){tempsi++;}
			while(tempei>=tempsi && arr[tempei]==arr[ei]){tempei--;}
			int totalelementsatstart=tempsi-si;
			int totalelementsatendd=ei-tempei;
			pairNumber+=(totalelementsatstart*totalelementsatendd);
			si=tempsi;
			ei=tempei;
		}
	}
	return pairNumber;
}

int tripletSum(int *arr, int n, int num)
{
	//Write your code here
	sort(arr,arr+n);
	int tripletPair=0;
	for(int i=0;i<n;i++){
		int smallOutput=pairSum(arr,i+1,n-1,num-arr[i]);
		tripletPair+=smallOutput;
	}
	return tripletPair;	
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
	cout<<tripletSum(arr,n,target)<<endl;
	return 0;
}