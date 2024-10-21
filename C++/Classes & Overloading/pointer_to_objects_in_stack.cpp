#include<bits/stdc++.h>
using namespace std;
class Rectangle{
    public:
    int length,breadth;
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    Rectangle r;
    Rectangle *p;
    p=&r;
    p->length=10;    
    p->breadth=5;
    cout<<p->area()<<endl;
    cout<<p->perimeter()<<endl;    
    return 0;
}
