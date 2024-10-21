#include<bits/stdc++.h>
using namespace std;
class Test{
    private:int a;
    protected:int b;
    public:int c;
    friend void fun();
};
void fun(){
    Test t;
    t.a=15;
    t.b=10;
    t.c=5;
    cout<<t.a<<" "<<t.b<<" "<<t.c<<endl;
}

class Your;

class My{
    private:int a=10;
    friend Your;
};

class Your{
    public:My m;
    void fun(){cout<<m.a<<endl;}
};

int main(){ 
    Your y;
    Test t;
    fun(); 
    return 0;
}
