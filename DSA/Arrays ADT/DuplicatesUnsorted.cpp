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

void Display(struct Array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

void Duplicate1(struct Array arr){
    for(int i=0;i<arr.length-1;i++){
        int count=1;
        for(int j=i+1;j<arr.length;j++){
            if(arr.A[i]==arr.A[j] and arr.A[i]!=-1){
                count++;
                arr.A[j]=-1;
            }
        }
        if(count>1){
            cout<<arr.A[i]<<" is appearing "<<count<<" times"<<endl;
        }
    }
}

void Duplicate2(struct Array arr){
    int max=Max(arr);
    int H[max+1]={0};
    for(int i=0;i<arr.length;i++){
        H[arr.A[i]]++;
    }
    for(int i=0;i<=max;i++){
        if(H[i]>1){cout<<i<<" is appearing "<<H[i]<<" times"<<endl;}
    }
}

int main(){
    Array arr{{8,3,6,4,6,5,6,8,2,7},10,10};
    Duplicate1(arr);
    Duplicate2(arr);
    return 0;
}

//Time Complexity for Duplicate1 is O(n square)
//Time Complexity for Duplicate2 is O(n)