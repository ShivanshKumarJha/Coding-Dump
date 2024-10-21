#include<bits/stdc++.h>
using namespace std;

class Triangle{
    private:
    int firstSide,secondSide,thirdSide;

    public:
    Triangle(int s1=1,int s2=1,int s3=1){
        if((s1+s2)>s3 or (s1+s3)>s2 or (s2+s3)>s1){
            firstSide=s1;
            secondSide=s2;
            thirdSide=s3;
            cout<<"Triangle is Possible"<<endl;
        }
        else{
            cout<<"Triangle is not Possible"<<endl;
        }
    }

    int getSides(){return firstSide,secondSide,thirdSide;}
    int getPerimeter();
    int getArea();
};

int Triangle::getPerimeter(){
    return firstSide+secondSide+thirdSide;
}

int Triangle::getArea(){
    int d=getPerimeter()/2;
    return sqrt(d*(d-firstSide)*(d-secondSide)*(d-thirdSide));
}

int main(){
    Triangle t1(3,4,5);
    cout<<"The Perimeter is "<<t1.getPerimeter()<<endl;
    cout<<"The Area is "<<t1.getArea()<<endl;
    return 0;
}