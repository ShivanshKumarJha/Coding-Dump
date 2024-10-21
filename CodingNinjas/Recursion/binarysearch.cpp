#include<bits/stdc++.h>
using namespace std;

int binarySearchHelper(int input[],int l,int e,int x,int size){
	int mid=(l+e)/2;
	if(l>e){return -1;}
	else{
		if(input[mid]==x){return mid;}
		if(input[mid]<x){
			return binarySearchHelper(input,mid+1,e,x,size);
		}
		else if(input[mid]>x){
			return binarySearchHelper(input,l,mid-1,x,size);
		}
	}
}

int binarySearch(int input[], int size, int element) {
	if(size==0){return -1;}
    return binarySearchHelper(input,0,size-1,element,size);
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int a[]={1,2,3,4,5,6,7,8,9,10};
	int x;cin>>x;
	cout<<binarySearch(a,10,x);
	return 0;
}