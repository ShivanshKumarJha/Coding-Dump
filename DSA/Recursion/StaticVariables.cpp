#include<bits/stdc++.h>
using namespace std;

int fun1(int n){
    if(n>0){
        return fun1(n-1)+n;
    }
    return 0;
}

int fun2(int n){
    static int x=0;
    if(n>0){
        x++;
        return fun2(n-1)+x;
    } 
    return 0;
}

int main(){
    int a=5;
    cout<<"For fun1(5): "<<fun1(5)<<endl;
    cout<<"For fun2(5): "<<fun2(5)<<endl;
    return 0;
}