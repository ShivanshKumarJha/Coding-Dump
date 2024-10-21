#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<memory>
using namespace std;

class Base{
public:
    Base(){cout<<"Base Class Constructor"<<endl;}
    virtual ~Base(){cout<<"Base Class Destructor"<<endl;}
};

class Derived:public Base{
public:
    Derived(){cout<<"Derived Class Constructor"<<endl;}
    ~Derived(){cout<<"Derived Class Destructor"<<endl;}
};

int main(){
    Base *ptr=new Derived();
    delete ptr;    
    return 0;
}