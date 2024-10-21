#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n<=1){
        return n;
    }
    int t0=0,t1=1,s;
    for(int i=2;i<=n;i++){
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
}

int main(){
    int value=fib(5);
    cout<<value<<endl;
    return 0;
}