#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n<=1){
        return n;
    }
    return fib(n-2)+fib(n-1);
}

int main(){
    int value=fib(5);
    cout<<value<<endl;
    return 0;
}