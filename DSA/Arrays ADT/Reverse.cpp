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

void Reverse1(struct Array *arr){
    int B[arr->length];
    for(int i=arr->length-1,j=0;i>=0;i--,j++){
        B[j]=arr->A[i];
    }
    for(int i=0;i<arr->length;i++){
        arr->A[i]=B[i];
    }
}

void Reverse2(struct Array *arr){
    for(int i=0,j=arr->length-1;i<j;i++,j--){
        Swap(&arr->A[i],&arr->A[j]);
    }
}

int main(){
    Array arr{{2,3,4,5,6,7,8,9,10,11},10,10};
    Display(arr);
    Reverse1(&arr);
    Display(arr);
    Reverse2(&arr);
    Display(arr);
    return 0;
}