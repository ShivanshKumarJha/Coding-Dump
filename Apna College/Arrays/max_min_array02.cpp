#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        maxNo=max(maxNo,arr[i]);    //min to find min no between two numbers
        minNo=min(minNo,arr[i]);    //max to find max no between two numbers
    }
    cout<<maxNo<<" "<<minNo<<endl;
    return 0;
}