#include<bits/stdc++.h>
using namespace std;

void rotate(int *input, int d, int n){
    //Write your code here
    int a[d];
    for(int i=0;i<d;i++){
    	a[i]=input[i];
    }
    for(int i=0;(i+d)<n;i++){
    	input[i]=input[i+d];
    }
    int k=0;
    for(int i=n-d;i<n;i++){
    	input[i]=a[k++];
    }
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int d;
	cin>>d;
	rotate(a,d,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}