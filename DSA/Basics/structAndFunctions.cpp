#include<bits/stdc++.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void initialize(struct Rectangle *p,int l,int b){
    p->length=l;
    p->breadth=b;
}

void changeLength(struct Rectangle *p,int l){
    p->length=l;
}

int area(struct Rectangle rect){
    return rect.length*rect.breadth;
}

int main(){
    Rectangle r;
    initialize(&r,10,5);
    cout<<"The area of rectangle is "<<area(r)<<endl;
    changeLength(&r,15);
    cout<<"The area of rectangle is "<<area(r)<<endl;
    return 0;
}