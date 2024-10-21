#include<bits/stdc++.h>
using namespace std;
class Shape{
public:
    virtual void draw()=0;
    virtual void rotate()=0;
    virtual ~Shape() { }
};

class Open_Shape:public Shape{
public:
    virtual ~Open_Shape() { }
};

class Closed_Shape:public Shape{
public:
    virtual ~Closed_Shape() { }
};



class Line:public Open_Shape{
public:
    virtual void draw() override{
        cout<<"Drawing a Line"<<endl;
    }
    virtual void rotate() override{
        cout<<"Rotating a Line"<<endl;
    }
    virtual ~Line() { }
};



class Circle:public Closed_Shape{
public:
    virtual void draw() override{
        cout<<"Drawing a Circle"<<endl;
    }
    virtual void rotate() override{
        cout<<"Rotating a Circle"<<endl;
    }
    virtual ~Circle() { }
};



class Square:public Closed_Shape{
public:
    virtual void draw() override{
        cout<<"Drawing a Square"<<endl;
    }
    virtual void rotate() override{
        cout<<"Rotating a Square"<<endl;
    }
    virtual ~Square() { }
};

void screen_refresh(const vector<Shape *> &shapes){
    cout<<"Refreshing"<<endl;
    for(const auto p:shapes){
        p->draw();
    }
}



int main(){
    Shape *s1=new Circle();    
    Shape *s2=new Line();    
    Shape *s3=new Square();    

    vector<Shape *> shapes {s1,s2,s3};
    for(const auto p:shapes){
        p->draw();
    }

    cout<<endl;
    screen_refresh(shapes);
    
    delete s1;
    delete s2;
    delete s3;
    return 0;
}