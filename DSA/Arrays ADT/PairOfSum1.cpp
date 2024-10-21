#include<bits/stdc++.h>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

int Max(struct Array arr){
    int max=arr.A[0];
    for(int i=0;i<arr.length;i++){
        if(arr.A[i]>max)
            max=arr.A[i];
    }
    return max;
}

void PairOfSum1(struct Array arr,int sum){
    for(int i=0;i<arr.length-1;i++){
        for(int j=i+1;j<arr.length;j++){
            if(arr.A[i]+arr.A[j]==sum){
                cout<<arr.A[i]<<" "<<arr.A[j]<<endl;
            }
        }
    }
}

void PairOfSum2(struct Array arr,int sum){
    int max=Max(arr);
    int H[max+1]={0};
    for(int i=0;i<arr.length;i++){
    if(H[sum-arr.A[i]]!=0 and (sum-arr.A[i]>0)){
            cout<<arr.A[i]<<" "<<sum-arr.A[i]<<endl;
        }
        H[arr.A[i]]++;
    }
}

int main(){
    Array arr{{6,3,8,10,16,7,5,2,9,14},10,10};
    PairOfSum1(arr,10);
    PairOfSum2(arr,10);
    return 0;
}

// Time Complexity:
// PairOfSum1:O(n square)
// PairOfSum2:O(n)