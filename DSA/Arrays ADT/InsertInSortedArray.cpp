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

void InsertSort(struct Array *arr,int x){
    int i=arr->length-1;
    if(arr->length==arr->size)
        return;
    while(i>=0 and arr->A[i]>x){
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
}

int main(){
    Array arr{{1,2,3,4,6,7,8,9,10},10,9};
    InsertSort(&arr,5);
    Display(arr);
    return 0; 
}