#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[n];
        }  
        for(int i=1;i<n-1;i++){
            if(arr[i]!=arr[i+1]){
                count+=2;
            }
            else{
                count=count;
            }
        }     
        if(arr[0]!=arr[1]){
            count+=1;
        }
        else{
            count=count;
        }
    }
    return 0;
}