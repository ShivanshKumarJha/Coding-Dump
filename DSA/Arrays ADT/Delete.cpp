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

int Delete(struct Array *arr,int index){
    int x=0;
    if(index>=0 and index<arr->length){
        x=arr->A[index];
        for(int i=index;i<arr->length-1;i++){
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
}

int main(){
    Array arr={{2,3,4,5,6},10,5};
    cout<<Delete(&arr,1)<<endl;
    Display(arr);
    return 0;
}

//Time Complexity 
//Max time-O(n) when we delete from first place
//Min time-O(1) when we delete from last place