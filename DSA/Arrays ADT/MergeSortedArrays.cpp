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

struct Array* Merge(struct Array *arr1,struct Array *arr2){
    int i=0,j=0,k=0;
    Array *arr3=new Array;
    while(i<arr1->length and j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
        }
        else{
            arr3->A[k++]=arr2->A[j++];
        }
    } 
    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i++];
    for(;j<arr2->length;j++)
        arr3->A[k++]=arr2->A[j++];
    arr3->length=arr1->length+arr2->length;
    arr3->size=arr1->size+arr2->size;

    return arr3;
}

int main(){
    Array arr1{{2,6,10,15,25},10,5};
    Array arr2{{3,4,7,18,20},10,5};
    Array *arr3=Merge(&arr1,&arr2);
    Display(*arr3);
    return 0;
}

// If arr1 have m elements and arr2 have n elements 
// Time Complexity : Theta(m+n)