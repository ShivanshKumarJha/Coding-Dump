#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if((3*x)<(2*y)){
            cout<<3*x<<endl;
        }
        else{
            cout<<2*y<<endl;
        }
    }
    return 0;
}