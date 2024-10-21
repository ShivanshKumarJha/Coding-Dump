#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int c;
        cin>>c;
        if(c>65){
            cout<<"Overload"<<endl;
        }
        else if(c<35){
            cout<<"Underload"<<endl;
        }
        else{
            cout<<"Normal"<<endl;
        }
    }
    return 0;
}