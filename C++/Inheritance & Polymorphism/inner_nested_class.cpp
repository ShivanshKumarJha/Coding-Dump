#include <bits/stdc++.h>
using namespace std;

class Outer{
public:
    int a = 10;
    static int b;
    void fun(){
        i.show();
        cout << i.x << endl;
    }

    class Inner{
    public:
        int x = 25;
        void show() { cout << b << endl; }
    };
    Inner i;
};
int Outer::b = 20;

int main(){
    Outer o;
    o.fun();
    return 0;
}