#include<bits/stdc++.h>
using namespace std;

void sum1(int x,int y){
    int temp=x;
    x=y;
    y=temp;
}

void sum2(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void sum3(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}

int main(){
    cout<<"-------------Using Call by Value-------------"<<endl;
    int a=10,b=5;
    cout<<"a:"<<a<<" b:"<<b<<endl;
    sum1(a,b);
    cout<<"a:"<<a<<" b:"<<b<<endl;
    cout<<endl;

    cout<<"-------------Using Call by Address-------------"<<endl;
    cout<<"a:"<<a<<" b:"<<b<<endl;
    sum2(&a,&b);
    cout<<"a:"<<a<<" b:"<<b<<endl;
    cout<<endl;

    cout<<"-------------Using Call by Reference-------------"<<endl;
    int l=10,m=5;
    cout<<"a:"<<l<<" b:"<<m<<endl;
    sum3(l,m);
    cout<<"a:"<<l<<" b:"<<m<<endl;
    cout<<endl;
    return 0;
}