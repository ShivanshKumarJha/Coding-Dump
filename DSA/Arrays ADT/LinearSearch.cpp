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

int LinearSearch(struct Array *arr,int key){
    for(int i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            Swap(&arr->A[i],&arr->A[i-1]);
            return i;
        }
    }
    return -1;
}

int main(){
    Array arr={{2,3,4,5,6},10,5};
    cout<<LinearSearch(&arr,5)<<endl;
    Display(arr);
    return 0;
}

//Time Complexity 
//Min time-O(1)          when element is at first place
//Max time-O(n)          when element is at last place
//Avg time-O(n square)   (1+2+3+4+.................n)/n
//Improving Linear Search by two methods
//      1.Transposition
//      2.Move to front/head