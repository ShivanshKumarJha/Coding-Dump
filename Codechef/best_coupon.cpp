#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int x;
        cin>>x;
        if((0.10*x)<100){
            cout<<"100"<<endl;
        }
        else{
            cout<<0.10*x<<endl;
        }
    }
    return 0;    
}