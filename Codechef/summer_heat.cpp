#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        int t1,t2;
        if(a%x==0 and b%y==0){
            cout<<(a/x)+(b/y)<<endl;
        }       
        else if((a%x==0 and b%y!=0) || (a%x!=0 and b%y==0)){
            cout<<(a/x)+(b/y)+1<<endl;
        }
        else{
            cout<<(a/x)+(b/y)+2<<endl;            
        }
    }
    return 0;
}