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
    int temp=*x;
    *x=*y;
    *y=temp;
}

void Rearrange(struct Array *arr){
    int i=0,j=arr->length-1;
    while(i<j){
        while(arr->A[i]<0){i++;}
        while(arr->A[j]>=0){j--;}
        if(i<j){Swap(&arr->A[i],&arr->A[j]);}
    }
}

int main(){
    Array arr{{2,-3,25,10,-15,-7,6},10,7};
    Rearrange(&arr);
    Display(arr);
    return 0; 
}