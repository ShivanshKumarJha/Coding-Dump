#include<bits/stdc++.h>
using namespace std;
class Rational{
    private:
    int p,q;

    public:
    Rational(int p=1,int q=1){
        this->p=p;
        this->q=q;
    }
    friend Rational operator+(Rational r1,Rational r2);
    friend ostream & operator<<(ostream &o,Rational &r);
};

Rational operator+(Rational r1,Rational r2){
    Rational temp;
    temp.p=((r1.p)*(r2.q))+((r2.p)*(r1.q));
    temp.q=(r1.q)*(r2.q);
    return temp;
}

ostream & operator<<(ostream &o,Rational &r){
    o<<r.p<<"/"<<r.q;
    return o;
}

int main(){
    Rational r1(3,4),r2(2,5),r3;
    r3=r1+r2;
    cout<<"Sum of "<<r1<<" and "<<r2<<" is "<<r3<<endl;
    return 0;
}