#include<bits/stdc++.h>
using namespace std;
class Rectangle{
    private:
    int length,breadth;

    public:
    void setLength(int l){
        if(l>=0){
            length=l;
        }
        else{
            length=0;
        }
    }

    void setBreadth(int b){
        if(b>=0){
            breadth=b;
        }
        else{
            breadth=0;
        }
    }

    int area(){
        return length*breadth;
    }

    int perimeter(){
        return 2*(length+breadth);
    }

    //Non-Parametised Constructor
    Rectangle(){
        length=0;
        breadth=0;
    }

    //Parametised Constructor
    Rectangle(int l,int b){
        setLength(l);
        setBreadth(b);
    }

    //Copy Constructor
    Rectangle(Rectangle &r){
        length=r.length;
        breadth=r.breadth;
    }
};

int main(){
    Rectangle r1;          //Non-Parametised
    Rectangle r2(10,5);   //Parametised
    Rectangle r3(r2);    //Copy
    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;
    cout<<r2.area()<<endl;
    cout<<r2.perimeter()<<endl;
    cout<<r3.area()<<endl;
    cout<<r3.perimeter()<<endl;
    return 0;
}