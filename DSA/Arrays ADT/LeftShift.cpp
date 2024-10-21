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

void Swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void LeftShift(struct Array *arr){
    for(int i=0;i<arr->length;i++){
        arr->A[i]=arr->A[i+1];
    }
    arr->A[arr->length-1]=0;
}

int main(){
    Array arr{{2,3,4,5,6,7,8,9,10,11},10,10};
    Display(arr);
    LeftShift(&arr);
    Display(arr);
    return 0;
}