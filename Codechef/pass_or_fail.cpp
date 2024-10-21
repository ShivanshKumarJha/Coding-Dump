#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,p;
        int total=(x*3)-((n-x)*1);
        if(total>p){
            cout<<"PASS"<<endl;
        } 
        else{
            cout<<"FAIL"<<endl;
        }
    }
    return 0;
}