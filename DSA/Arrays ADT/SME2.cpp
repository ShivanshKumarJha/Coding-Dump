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

int Max(struct Array arr){
    int max=arr.A[0];
    for(int i=0;i<arr.length;i++){
        if(arr.A[i]>max)
            max=arr.A[i];
    }
    return max;
}

void Display_Vector(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

vector<int> MultipleMissingElement(struct Array arr){
    vector<int> v;
    int max=Max(arr);
    int H[max+1]={0};
    for(int i=0;i<arr.length;i++){
        H[arr.A[i]]++;
    }
    for(int i=1;i<=max;i++){
        if(H[i]==0){
            v.push_back(i);
        }
    }
    return v;
}

int main(){
    Array arr{{3,7,4,9,12,6,1,11,2,10},10,10};
    Display(arr);
    vector<int> v=MultipleMissingElement(arr);
    Display_Vector(v);  
    return 0;
}

//For Unsorted Array Time Complexity:O(n square)