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

void PairOfSum(struct Array arr,int sum){
    int i=0,j=arr.length-1;
    while(i<j){
        if(arr.A[i]+arr.A[j]==sum){
            cout<<arr.A[i]<<" "<<arr.A[j]<<endl;
            i++;j++;
        }
        else if(arr.A[i]+arr.A[j]<sum){
            i++;
        }
        else{
            j--;
        }
    }
}

int main(){
    Array arr{{1,3,4,5,6,8,9,10,12,14},10,10};
    PairOfSum(arr,10);
    return 0;
}

//Time Complexity: O(n) 