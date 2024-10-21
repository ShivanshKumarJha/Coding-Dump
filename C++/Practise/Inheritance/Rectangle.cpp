#include<bits/stdc++.h>
using namespace std;

class Rectangle{
private:
    int length;
    int breadth;

public:
    Rectangle()
        :length{1},breadth{1}{}

    Rectangle(int l,int b)
        :length{l},breadth{b}{}

    void setLength(int l);
    void setBreadth(int b);
    int getLength();
    int getBreadth();
    int area();
    int perimeter();
    ~Rectangle(){}
};

void Rectangle::setLength(int l){length=l;}
void Rectangle::setBreadth(int b){breadth=b;}
int Rectangle::getLength(){return length;}
int Rectangle::getBreadth(){return breadth;}
int Rectangle::area(){return length*breadth;}
int Rectangle::perimeter(){return 2*(length+breadth);}

class Cuboid:public Rectangle{
private:
    int height;

public:

    Cuboid()
        :Rectangle(),height{height}{}

    Cuboid(int l,int b,int h)
        :Rectangle(l,b),height{h}{}

    void setHeigth(int h);
    int getHeight();
    int volume();
    ~Cuboid(){}
    
};

void Cuboid::setHeigth(int h){height=h;}
int Cuboid::getHeight(){return height;}
int Cuboid::volume(){return getLength()*getBreadth()*height;}

int main(){
    Rectangle r1;
    Rectangle r2(10,5);
    cout<<r1.area()<<endl;
    cout<<r2.area()<<endl;
    cout<<r1.perimeter()<<endl;
    cout<<r2.perimeter()<<endl;

    cout<<"================================"<<endl;
    Cuboid c1;
    Cuboid c2(2,3,4);
    cout<<c1.area()<<endl;
    cout<<c2.area()<<endl;
    cout<<c1.perimeter()<<endl;
    cout<<c2.perimeter()<<endl;
    cout<<c1.volume()<<endl;
    cout<<c2.volume()<<endl;
    return 0;
}