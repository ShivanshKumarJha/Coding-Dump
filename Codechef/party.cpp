#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,k;
        cin>>n>>x>>k;
        if(n*x<=k)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;

}