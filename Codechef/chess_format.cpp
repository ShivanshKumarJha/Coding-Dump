#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a,b;
        if(a+b<3){
            cout<<"Bullet"<<endl;
        }
        else if(a+b>=3 and a+b<=10){
            cout<<"Blitz"<<endl;
        }
        else if(a+b>=11 and a+b<=60){
            cout<<"Rapid"<<endl;
        }
        else{
            cout<<"Classical"<<endl;
        }
    }
    return 0;
}