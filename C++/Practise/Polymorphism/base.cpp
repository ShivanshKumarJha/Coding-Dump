#include<bits/stdc++.h>
using namespace std;

class Base{
public:
    virtual void print()=0;
};

class Derived1:public Base{
public:
    void print(){
        cout<<"Derived1"<<endl;
    }
};

class Derived2:public Base{
public:
    void print(){
        cout<<"Derived2"<<endl;
    }
};

int main(){
    Base *p=new Derived1;
    p->print();
    p=new Derived2;
    p->print();
    return 0;
}