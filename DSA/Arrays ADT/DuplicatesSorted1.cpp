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

vector<int> DisplayDuplicate(struct Array arr){
    vector<int> v;
    int lastDuplicate=0;
    for(int i=0;i<arr.length;i++){
        if(arr.A[i]==arr.A[i+1] and arr.A[i]!=lastDuplicate){
            v.push_back(arr.A[i]);
            lastDuplicate=arr.A[i];
        }
    }
    return v;
}

void CountDuplicate(struct Array arr){
    for(int i=0;i<arr.length-1;i++){
        if(arr.A[i]==arr.A[i+1]){
            int j=i+1;
            while(arr.A[j]==arr.A[i]){j++;}
            cout<<arr.A[i]<<" is appearing "<<j-i<<" times"<<endl;
            i=j-1;
        }
    }
}

int main(){
    Array arr{{3,6,8,8,10,12,15,15,15,20},10,10};
    vector<int> v=DisplayDuplicate(arr);
    Display_Vector(v);
    CountDuplicate(arr);
}

//Time Complxity is O(n)