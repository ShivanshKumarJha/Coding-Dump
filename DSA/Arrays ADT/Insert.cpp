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

void Append(struct Array *arr,int x){
    if(arr->length<arr->size){
        arr->A[arr->length++]=x;  //length++ is first appending the value and then increment the length
    }
}

void Insert(struct Array *arr,int index,int x){
    if(index>=0 and index<=arr->length){
        for(int i=arr->length;i>index;i--){
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
}

int main(){
    Array arr={{2,3,4,5,6},10,5};
    cout<<"Before Operation: ";
    Display(arr);
    Append(&arr,7);
    cout<<"After Appending: ";
    Display(arr);
    Insert(&arr,5,8);
    cout<<"After Inserting: ";
    Display(arr);
    return 0;
}

//Time Complexity 
//Max time-O(n) when we insert at first place
//Min time-o(1) when we insert at last place