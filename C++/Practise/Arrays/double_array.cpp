#include<bits/stdc++.h>
using namespace std;

void display(int *ptr,int n){
    for(size_t i=0;i<n;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
}

void double_array(int *ptr,int n){
    int arr2[n];
    for(size_t i=0;i<n;i++){
        arr2[i]=ptr[i]*2;
    }
    display(arr2,n);
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(size_t i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Original array: "<<endl;
    display(arr,n);
    cout<<"After the transformation: "<<endl;
    double_array(arr,n);
    return 0;
}
