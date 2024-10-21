#include<bits/stdc++.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void fun1(struct Rectangle r1){
    cout<<"Length:"<<r1.length<<" Breadth:"<<r1.breadth<<endl;
}

void fun2(struct Rectangle *p,int l1){
    p->length=l1;
    cout<<"Length:"<<p->length<<" Breadth:"<<p->breadth<<endl;    
    
}

void fun3(struct Rectangle &r1,int l1){
    r1.length=l1;
    cout<<"Length:"<<r1.length<<" Breadth:"<<r1.breadth<<endl;
}

int main(){
    Rectangle r={10,5};
    cout<<"Length:"<<r.length<<" Breadth:"<<r.breadth<<endl;    

    //Using Call by Value
    fun1(r);

    //Using Call by address
    int l=15;
    fun2(&r,l);

    //Using Call by reference
    int l_old=10;
    fun3(r,l_old);
    return 0;
}