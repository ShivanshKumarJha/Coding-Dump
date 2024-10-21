#include<bits/stdc++.h>
using namespace std;

int arrayRotateCheck(int *input, int size){
    //Write your code here
    for(int i=0;i<size-1;i++){
        if(input[i]>input[i+1]){return i+1;}
    }
    return 0;
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<arrayRotateCheck(arr,n)<<endl;
	return 0;
}