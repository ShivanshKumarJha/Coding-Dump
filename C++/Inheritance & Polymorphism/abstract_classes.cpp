#include<bits/stdc++.h>
using namespace std;
class Base{
    public:
    virtual void fun1()=0;       //Pure Virtual Classes
    virtual void fun2()=0;
};

class Derived1:public Base{
    public:
    void fun1(){
        cout<<"fun1 of Derived1"<<endl;
    }
    void fun2(){
        cout<<"fun2 of Derived1"<<endl;
    }
};

class Derived2:public Base{
    public:
    void fun1(){
        cout<<"fun1 of Derived2"<<endl;
    }
    void fun2(){
        cout<<"fun2 of Derived2"<<endl;
    }
};

int main(){
    Base *p=new Derived1();
    p->fun1();    
    p->fun2();
    p=new Derived2();
    p->fun1();    
    p->fun2();    
    return 0;
}