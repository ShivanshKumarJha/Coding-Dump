#include<bits/stdc++.h>
using namespace std;
int print(int arr[],int n,int key){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            count++;
        }
    }
    return count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[7];
        for(int i=0;i<7;i++){
            cin>>arr[i];
        }
        int no_1=print(arr,7,1);
        int no_2=print(arr,7,0);
        if(no_1>no_2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}