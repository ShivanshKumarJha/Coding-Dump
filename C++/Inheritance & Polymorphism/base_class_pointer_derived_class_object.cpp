#include<bits/stdc++.h>
using namespace std;
class Base{
    public:
    void fun1(){
        cout<<"fun1 of Base"<<endl;
    }
};

class Derived:public Base{
    public:
    void fun2(){
        cout<<"fun2 of Derived"<<endl;
    }
};

int main(){
    Base *ptr;
    ptr=new Derived();
    ptr->fun1();    
    // ptr->fun2();    Error
    return 0;
}