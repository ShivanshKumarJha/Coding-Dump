#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}

int c(int n,int r){
    int t1,t2,t3;
    t1=fact(n);
    t2=fact(r);
    t3=fact(n-r);
    return t1/(t2*t3);
}

int main(){
    int value=c(5,2);
    cout<<value<<endl;
    return 0;
}