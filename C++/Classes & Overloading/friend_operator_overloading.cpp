#include<bits/stdc++.h>
using namespace std;

class Complex{
    public:
    int real,img;
    Complex(int r=0,int i=0){
        real=r;
        img=i;
    }
    void display(){
        cout<<real<<"+i"<<img<<endl;
    }
    friend Complex operator+(Complex c1,Complex c2);
};

Complex operator+(Complex c1,Complex c2){
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}

int main(){
    Complex c1(7,4);
    Complex c2(8,5),c3;
    c3=c1+c2;
    c3.display();
    // cout<<c3.real<<"+i"<<c3.img<<endl;
    return 0;
}
