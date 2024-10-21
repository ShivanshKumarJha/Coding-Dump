#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,count=0;
        cin>>a>>b;
        for(int x=1;x<=a;x++){
            for(int y=1;y<=b;y++){
                if((x+y)%2==0){
                    count++;
                }
            }
        }
        cout<<count;
    }
    return 0;
}