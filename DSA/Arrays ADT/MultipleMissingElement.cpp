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

vector<int> MultipleMissingElement(struct Array arr){
    int diff=arr.A[0]-0;
    vector<int> v;
    for(int i=0;i<arr.length;i++){
        if(arr.A[i]-i!=diff){
            while(diff<arr.A[i]-i){
                v.push_back(i+diff);
                diff++;
            }
        }
    }
    return v;
}

void Display_Vector(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    Array arr{{6,7,8,9,11,12,15,16,17,18},10,10};
    Display(arr);
    vector<int> v=MultipleMissingElement(arr);
    Display_Vector(v);
    return 0;
}