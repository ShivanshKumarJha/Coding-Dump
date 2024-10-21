#include<bits/stdc++.h>
using namespace std;

void fun(int A[],int size){
    cout<<"Size of the array is "<<sizeof(A)<<endl;
    for(int x=0;x<size;x++){
        cout<<A[x]<<" ";
    }
    cout<<endl;
}

int * func(int size){
    int *p=new int[size];
    for(int i=0;i<size;i++){
        p[i]=i+1;
    }
    return p;
}

int main(){
    int A[]={2,4,6,8,10};
    int n=5;
    cout<<"Size of the array is "<<sizeof(A)<<endl;
    for(int x:A){
       cout<<x<<" ";
    }
    cout<<endl;
    fun(A,5);

    cout<<"\nReturning the array from the function"<<endl;
    int *ptr,sz=5;
    ptr=func(sz);
    for(int i=0;i<sz;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    return 0;
}