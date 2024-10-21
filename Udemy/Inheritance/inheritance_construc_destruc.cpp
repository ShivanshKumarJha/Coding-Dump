#include<bits/stdc++.h>
using namespace std;
class Base{
private:
    int value;
public:
    Base():value{0}{cout<<"Base No-Args Constructor"<<endl;}
    Base(int x):value{x}{cout<<"Base(int) Overloaded Constructor"<<endl;}
    ~Base(){cout<<"Base Destructor"<<endl;}
};

class Derived:public Base{
private:
    int doubled_value;
public:
    Derived():Base{},doubled_value{0}{cout<<"Derived No-Args Constructor"<<endl;}
    Derived(int x):Base{x},doubled_value{x*2}{cout<<"Derived(int) Overload Constructor"<<endl;}
    ~Derived(){cout<<"Derived Destructor"<<endl;}
};

int main(){
    Base b;
    Base b1{100};    
    Derived d;
    Derived d1{100};
    return 0;
}