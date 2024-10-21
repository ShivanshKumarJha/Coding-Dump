#include<bits/stdc++.h>
using namespace std;

class Base{
private:
    int value;
public:
    Base():value{0}{cout<<"Base No-Args Constructor"<<endl;}

    Base(int x):value{x}{cout<<"Base(int) Overloaded Constructor"<<endl;}

    Base(const Base &other)
        :value{other.value}{
            cout<<"Base Copy Constructor"<<endl;
        }

    Base &operator=(const Base &rhs){
        cout<<"Base Operator"<<endl;
        if(this==&rhs){
            return *this;
        }
        value=rhs.value;
        retutn *this;
    }

    ~Base(){cout<<"Base Destructor"<<endl;}
};


class Derived:public Base{
private:
    int doubled_value;
public:
    Derived():Base{},doubled_value{0}{cout<<"Derived No-Args Constructor"<<endl;}

    Derived(int x):Base{x},doubled_value{x*2}{cout<<"Derived(int) Overload Constructor"<<endl;}

    Derived(const Derived &other)
        :Base(other),doubled_value{other.doubled_value}{
            cout<<"Derived Copy Constructor"<<endl;
        }

    Derived &operator=(const Derived &rhs){
        cout<<"Derived Operator"<<endl;
        if(this==&rhs){
            return *this;
        }
        Base::operator=(rhs);
        doubled_value=rhs.doubled_value;
        return *this;
    }

    ~Derived(){cout<<"Derived Destructor"<<endl;}
};

int main(){
    Base b;
    Base b1{100};    
    Derived d;
    Derived d1{100};

    Base b{1000};
    Base b1{b};
    b=b1;

    Derived d{100};
    Derived d1{d};
    d=d1;
    return 0; 
}