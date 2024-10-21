#include<bits/stdc++.h>
using namespace std;

int main(){
    char x,y;
    cin>>x>>y;
    // r-brown b-blue g-green
    // green-rarest brown-common
    if(x==y){
        cout<<x<<endl;
    }
    else if(x=='R' || y=='R'){
        cout<<"R"<<endl;
    }
    else if(x=='B' || y=='B'){
        cout<<"B"<<endl;
    }
    return 0;
}