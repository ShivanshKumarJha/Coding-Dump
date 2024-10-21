#include<stdio.h>
#include<stdlib.h>

#include<bits/stdc++.h>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main(){
    printf("\nUsing C++ for creating the object\n");
    Rectangle r={10,5};
    cout<<"Length:"<<r.length<<" Breadth:"<<r.breadth<<endl;

    Rectangle *p1=&r;
    cout<<"Length:"<<p1->length<<" Breadth:"<<p1->breadth<<endl;

    Rectangle *p2=new Rectangle;
    p2->length=15;
    p2->breadth=10;
    cout<<"Length:"<<p2->length<<" Breadth:"<<p2->breadth<<endl;



    printf("\nUsing C for creating the object\n");
    Rectangle r1={10,5};
    printf("Length:%d Breadth:%d\n",r1.length,r1.breadth);

    Rectangle *p3=&r1;
    printf("Length:%d Breadth:%d\n",p3->length,p3->breadth);
    
    Rectangle *p4=(struct Rectangle *) malloc(sizeof(struct Rectangle));
    p4->length=15;
    p4->breadth=10;
    printf("Length:%d Breadth:%d\n",p4->length,p4->breadth);
    return 0;
}