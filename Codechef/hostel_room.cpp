#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int total=x,max=x;
        for(int j=0;j<n;j++){
            total+=arr[j];
            if(total>max){
                max=total;
            }
        }
        cout<<max<<endl;
    }
    return 0;
}