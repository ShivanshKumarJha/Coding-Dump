#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,m,d;
        cin>>x>>m>>d;
        if((x*m)>(x+d)){
            cout<<x+d<<endl;
        }
        else{
            cout<<x*m<<endl;
        }
    }
    return 0;
}