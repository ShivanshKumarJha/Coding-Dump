#include<bits/stdc++.h>
using namespace std;
class shapes{
    public:
    virtual float area()=0;
    virtual float perimeter()=0;
};

class Rectangle:public shapes{
    private:
    int length,breadth;

    public:
    Rectangle(int l=1,int b=1){length=l;breadth=b;}
    float area(){return length*breadth;}
    float perimeter(){return 2*(length+breadth);}
};

class Circle:public shapes{
    private:
    float radius;

    public:
    Circle(int r=1){radius=r;}
    float area(){return 3.14*pow(radius,2);}
    float perimeter(){return 2*3.14*radius;}
};

class Square:public shapes{
    private:
    int side;

    public:
    Square(int s=1){side=s;}
    float area(){return side*side;}
    float perimeter(){return 4*side;}
};

int main(){
    shapes *p=new Rectangle(5,2);
    cout<<"The area of the rectangle is "<<p->area()<<endl;
    cout<<"The perimeter of the rectangle is "<<p->perimeter()<<endl;
    p=new Circle(5);
    cout<<"The area of the circle is "<<p->area()<<endl;
    cout<<"The perimeter of the circle is "<<p->perimeter()<<endl;
    p=new Square(4);
    cout<<"The area of the square is "<<p->area()<<endl;
    cout<<"The perimeter of the square is "<<p->perimeter()<<endl;
    return 0;
}
