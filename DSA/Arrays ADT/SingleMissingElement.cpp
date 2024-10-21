#include<bits/stdc++.h>
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

int SingleMissingElement(struct Array arr){
    int diff=arr.A[0]-0;
    for(int i=0;i<arr.length;i++){
        if(arr.A[i]-i!=diff){
            return i+diff;
        }
    }
    return -1;
}

int main(){
    Array arr{{6,7,8,9,10,11,13,14,15,16},10,10};
    Display(arr);
    cout<<"The missing element is "<<SingleMissingElement(arr)<<endl;
    return 0;
}

// Time complexity: O(n)