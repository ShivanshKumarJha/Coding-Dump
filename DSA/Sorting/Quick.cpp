#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y){
  int temp=*x;*x=*y;*y=temp;
}

int partition(int a[],int start,int end){
  int pivot=a[end];
  int pi=start;
  for(int i=start;i<=end-1;i++){
    if(a[i]<pivot){swap(&a[pi],&a[i]);pi++;}
  }
  swap(&a[pi],&a[end]);
  return pi;
}

void quickSortHelper(int input[], int start, int end) {
  if(start>=end){return;}
  int pi=partition(input,start,end);
  quickSortHelper(input, start,pi-1);
  quickSortHelper(input, pi+1,end);
}

void quickSort(int input[], int size) {
	quickSortHelper(input,0,size-1);
}

int main(){
    int a[]={8,2,9,6,5,3,7,4};
    for(int i=0;i<8;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    quickSort(a,8);
    for(int i=0;i<8;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}