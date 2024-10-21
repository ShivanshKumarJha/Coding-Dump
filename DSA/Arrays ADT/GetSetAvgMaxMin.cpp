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

int Get(struct Array arr,int index){
    if(index>=0 and index<arr.length){
        return arr.A[index];
    }
    return -1;
}

void Set(struct Array *arr,int index,int key){
    if(index>=0 and index<arr->length){
        arr->A[index]=key;
    }
}

int Max(struct Array arr){
    int max=arr.A[0];
    for(int i=0;i<arr.length;i++){
        if(arr.A[i]>max)
            max=arr.A[i];
    }
    return max;
}

int Min(struct Array arr){
    int min=arr.A[0];
    for(int i=0;i<arr.length;i++){
        if(arr.A[i]<min)
            min=arr.A[i];
    }
    return min;
}

int Avg(struct Array arr){
    int total=0;
    for(int i=0;i<arr.length;i++){
        total+=arr.A[i];
    }
    return (total)/arr.length;
}

int main(){
    struct Array arr={{2,3,4,5,6},10,5};
    cout<<Get(arr,4)<<endl;
    Set(&arr,4,7);
    Display(arr);
    cout<<Max(arr)<<endl;
    cout<<Min(arr)<<endl;
    cout<<Avg(arr)<<endl;
    return 0;
}