#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<memory>
using namespace std;
class Test{
public:
    Test(){cout<<"Test Created"<<endl;}
    ~Test(){cout<<"Test Destroyed"<<endl;}
};

int main(){
    Test t;
    Test *p=new Test();
    delete p;  
    return 0;
}