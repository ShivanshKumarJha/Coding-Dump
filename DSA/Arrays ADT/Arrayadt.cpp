#include<bits/stdc++.h>
using namespace std;

struct Array{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr){
    cout<<"\nElements are:"<<endl;
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
}

int main(){
    int n;
    Array arr;
    cout<<"Enter the size of the array:";
    cin>>arr.size;
    arr.A=new int[arr.size*sizeof(int)];
    arr.length=0;

    cout<<"Enter how many numbers you want to add to Array:";
    cin>>n;
    cout<<"Enter all elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr.A[i];
    }
    arr.length=n;
    Display(arr);
    return 0;
}