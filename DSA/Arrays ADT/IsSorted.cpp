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

bool IsSorted(struct Array arr){
    for(int i=0;i<arr.length-1;i++){
        if(arr.A[i+1]<arr.A[i])
            return false;
    }
    return true;
}

int main(){
    cout<<boolalpha;
    Array arr{{1,2,3,4,6,7,8,9,10},10,9};
    cout<<IsSorted(arr)<<endl;
    return 0; 
}