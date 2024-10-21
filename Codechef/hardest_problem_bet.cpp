#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(c<a and c<b){
            cout<<"Alice"<<endl;
        }
        else if(b<a and b<c){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Draw"<<endl;
        }
    }
    return 0;
}