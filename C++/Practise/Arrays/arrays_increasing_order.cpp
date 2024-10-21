#include<bits/stdc++.h>
using namespace std;

bool check(int *ptr,int size){
    for(int i=0;i<size;i++){
        if(ptr[i+1] < ptr[i]){
            return false;
        }
    }
    return true;
}

int main(){
    cout<<boolalpha;
    int n;
    cout<<"Enter the Size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<check(arr,n)<<endl;
    return 0;
}