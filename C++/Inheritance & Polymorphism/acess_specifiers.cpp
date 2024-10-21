#include<bits/stdc++.h>
using namespace std;
class Base{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    void funBase(){
        a=10;
        b=20;
        c=30;
    }
};

int main(){
    Base x;
    x.a=15;
    x.b=30;
    x.c=90;
    return 0;
}