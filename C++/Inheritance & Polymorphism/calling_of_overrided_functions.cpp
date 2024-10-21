#include<bits/stdc++.h>
using namespace std;

class Parent{
    public:
    virtual void display(){
        cout<<"Display of Parent"<<endl;
    }
};

class Child:public Parent{
    public:
    void display(){
        cout<<"Display of Child"<<endl;
    }
};

int main(){
    Parent *p;
    p=new Child();
    p->display();    
    return 0;
}