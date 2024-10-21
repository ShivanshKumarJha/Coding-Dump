#include<bits/stdc++.h>
using namespace std;

int LastIndex(int A[],int index,int x){
    if(index<0)
        return -1;
    if(A[index]==x)
        return index;
    return LastIndex(A,index-1,x);
}

int main(){
    int arr[6]={1,6,2,5,5,2};
    int index=sizeof(arr)/sizeof(arr[0]);
    cout<<LastIndex(arr,index,5)<<endl;
    return 0; 
}