#include<bits/stdc++.h>
using namespace std;

class I_Printable{
    friend ostream &operator<<(ostream &os,const I_Printable &obj);
public:
    virtual void print(ostream &os) const=0;
};

ostream &operator<<(ostream &os,const I_Printable &obj){
    obj.print(os);
    return os;
}

class Account:public I_Printable{
public:
    virtual void withdraw(double amount){
        cout<<"In Account:withdraw"<<endl;
    }
    virtual void print(ostream &os) const override{
        os<<"Account Display"<<endl;
    }
    virtual ~Account() { }
};

class Savings:public Account{
public:
    virtual void withdraw(double amount){
        cout<<"In Savings:withdraw"<<endl;
    }
    virtual void print(ostream &os) const override{
        os<<"Savings Display"<<endl;
    }
    virtual ~Savings() { }
};

class Checking:public Account{
public:
    virtual void withdraw(double amount){
        cout<<"In Checking:withdraw"<<endl;
    }
    virtual void print(ostream &os) const override{
        os<<"Checking Display"<<endl;
    }
    virtual ~Checking() { }
};

class Trust:public Account{
public:
    virtual void withdraw(double amount){
        cout<<"In Trust:withdraw"<<endl;
    }
    virtual void print(ostream &os) const override{
        os<<"Trust Display"<<endl;
    }
    virtual ~Trust() { }
};

int main(){
    Account a;
    cout<<a;

    Checking c;
    cout<<c;
    
    Savings s;
    cout<<s;

    Trust t;
    cout<<t;

    Account *p1=new Account();
    cout<<*p1;                 //Account Display

    Account *p2=new Checking();      //Account Display
    cout<<*p2;
    return 0;
}