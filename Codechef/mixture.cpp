#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a>b and b>0){
            cout<<"Solution"<<endl;
        }
        else if(b=0){
            cout<<"Solid"<<endl;
        }
        else if(a=0){
            cout<<"Liquid"<<endl;
        }
        else{
            cout<<endl;
        }
    }
    return 0;
}