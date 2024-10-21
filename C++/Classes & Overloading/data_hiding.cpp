#include<bits/stdc++.h>
using namespace std;
class Rectangle{
    private:
    int length,breadth;  //Data members are made to 
    be private attributes
    public:             //Member Functions are made to be public attributes
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    Rectangle r;
    r.length=10;       //Can't directly access to private attributes
    r.breadth=5;
    return 0;
}