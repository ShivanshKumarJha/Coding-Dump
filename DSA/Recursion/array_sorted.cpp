#include<bits/stdc++.h>
using namespace std;

bool sorted(int arr[],int n){
    bool restArray=sorted(arr+1,n-1);
    return (arr[0]<arr[1] && restArray);
}

int main(){
    
    return 0;
}