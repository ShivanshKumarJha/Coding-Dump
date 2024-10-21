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

void Display_Vector(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int Max(struct Array arr){
    int max=arr.A[0];
    for(int i=0;i<arr.length;i++){
        if(arr.A[i]>max)
            max=arr.A[i];
    }
    return max;
}

void Duplicate(struct Array arr){
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
    Array arr{{3,6,8,8,10,12,15,15,15,20},10,10};
    Duplicate(arr);
    return 0;
}

//Time Complexity O(n)