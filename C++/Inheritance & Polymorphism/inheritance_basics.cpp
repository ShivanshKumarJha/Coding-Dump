 #include<bits/stdc++.h>
using namespace std;
class base{
    public:
    int x;
    void show(){
        cout<<x<<endl;
    }
};

class derived:public base{
    public:
    int y;
    void display(){
        cout<<x<<" "<<y<<endl;
    }
};

int main(){
    base b;
    b.x=10;
    b.show();
    derived d;
    d.x=15;
    d.y=20;
    d.show();
    d.display();    
    return 0;
}