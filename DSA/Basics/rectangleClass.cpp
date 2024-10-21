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
    
    void setLength(int l){length=l;}
    void setBreadth(int b){breadth=b;}
    int getLength(){return length;}
    int getBreadth(){return breadth;}
    int area();
};

int Rectangle::area(){
    return length*breadth;
}

int main(){
    Rectangle r1;
    cout<<"The area of the rectangle is "<<r1.area()<<endl;
    Rectangle r2(10,5);
    cout<<"The area of the rectangle is "<<r2.area()<<endl;
    return 0;
}