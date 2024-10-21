#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int l,int mid,int h){
	int i=l,j=mid+1,k=0;
	int b[h-l+1];
	while(i<=mid && j<=h){
		if(a[i]<=a[j]){
			b[k++]=a[i++];
			}
		else{
			b[k++]=a[j++];
			}
	}
	for(;i<=mid;i++){
		b[k++]=a[i];
	}
	for(;j<=h;j++){
		b[k++]=a[j];
	}
	for(int i=l;i<=h;i++){
		a[i]=b[i-l];
	}
}

void mergeSortHelper(int a[],int si,int ei){
	if(si>ei){
		return;
		}
	if(si<ei)
	{
	int mid=(si+ei)/2;
	mergeSortHelper(a,si,mid);
	mergeSortHelper(a,mid+1,ei);
	merge(a,si,mid,ei);
	}
}

void mergeSort(int input[], int size){
    mergeSortHelper(input,0,size-1); 
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    int a[]={8,2,9,6,5,3,7,4};
    for(int i=0;i<8;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    mergeSort(a,8);
    for(int i=0;i<8;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}