#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>=b && a>=c){
            if(b>=c){
                cout<<a+b<<endl;
            }
            else{
                cout<<a+c<<endl;
            }
        }       
        else if(b>=c and b>=a){
            if(c>=a){
                cout<<b+c<<endl;
            }
            else{
                cout<<a+b<<endl;
            }
        }       
        else if(c>=a and c>=b){
            if(a>=b){
                cout<<a+c<<endl;
            }
            else{
                cout<<b+c<<endl;
            }
        }       
    }
    return 0;
}