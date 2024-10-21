#include<bits/stdc++.h>
using namespace std;
class Car{
    public:
    virtual void start(){
        cout<<"Car started"<<endl;
    }
    virtual void stop(){
        cout<<"Car stopped"<<endl;
    }
};

class Innova:public Car{
    public:
    void start(){
        cout<<"Innova started"<<endl;
    }
    void stop(){
        cout<<"Innova stopped"<<endl;
    }
};

class Swift:public Car{
    public:
    void start(){
        cout<<"Swift started"<<endl;
    }
    void stop(){
        cout<<"Swift stopped"<<endl;
    }
};

int main(){
    Car *p=new Innova();
    p->start();
    p->stop();
    p=new Swift();
    p->start();
    p->stop();
    return 0;
}