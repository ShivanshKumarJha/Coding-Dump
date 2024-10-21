#include <bits/stdc++.h>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

int BinarySearch(struct Array arr,int key){
    int l,mid,h;
    l=0;
    h=arr.length-1;
    while(l<=h){
        mid=(l+h)/2;
        if(key==arr.A[mid])
            return mid;
        if(key>arr.A[mid])
            l=mid+1;
        if(key<arr.A[mid])
            h=mid-1;
    }
    return -1;
}

int RBinarySearch(int a[],int l,int h,int key){
    int mid;
    while(l<=h){
        mid=(l+h)/2;
        if(key==a[mid])
            return mid;
        if(key<a[mid])
            return RBinarySearch(a,l,mid-1,key);
        if(key>a[mid])
            return RBinarySearch(a,mid+1,h,key);
    }
    return -1;
}

int main(){
    Array arr = {{1,2,3,4,5,6,7,8,9,10},10,10};
    cout<<BinarySearch(arr,5)<<endl;
    Display(arr);
    cout<<RBinarySearch(arr.A,0,arr.length,5)<<endl;
    Display(arr);
    return 0;
}

// Time Complexity
//For Successful
    //Minimum Time O(1)
    //Maximum Time O(logn)
//For unsuccessful
    //O(logn)