#include<bits/stdc++.h>
using namespace std;

class Element{
    public:
    int coeff;
    int exp;
};

class Polynomial{
    private:
    int n;
    Element *t;

    public:
    Polynomial(int n);
    friend istream &operator>>(istream &is,Polynomial &p);
    friend ostream &operator<<(ostream &os,Polynomial &p);
    int Evaluate(Polynomial p,int x);
    Polynomial* operator+(Polynomial &rhs);
    ~Polynomial(){delete []t;}
};

Polynomial::Polynomial(int n){
    this->n=n;
    t=new Element[this->n];
}

istream &operator>>(istream &is,Polynomial &p){
    cout<<"Enter terms"<<endl;
    for(int i=0;i<p.n;i++)
        cin>>p.t[i].coeff>>p.t[i].exp;
    return is;
}

ostream &operator<<(ostream &os,Polynomial &p){
    for(int i=0;i<p.n;i++)
        cout<<p.t[i].coeff<<"x"<<p.t[i].exp<<"+";
    cout<<endl;
    return os;
}

int Polynomial::Evaluate(Polynomial p,int x){
    int sum=0;
    for(int i=0;i<p.n;i++)
        sum+=(p.t[i].coeff)*(pow(x,p.t[i].exp));
    return sum;
}

Polynomial* Polynomial::operator+(Polynomial &rhs){
    int i,j,k;
    i=j=k=0;
    Polynomial *p3=new Polynomial(n+rhs.n);
    while(i<n && j<rhs.n){
        if(t[i].exp>rhs.t[j].exp)
            p3->t[k++]=t[i++];
        else if(t[i].exp<rhs.t[j].exp)
            p3->t[k++]=rhs.t[j++];
        else{
            p3->t[k].exp=t[i].exp;
            p3->t[k++].coeff=t[i++].coeff+rhs.t[j++].coeff;
        }
    }
    for(;i<n;i++) p3->t[k++]=t[i];
    for(;j<rhs.n;j++) p3->t[k++]=rhs.t[j];
    p3->n=k;
    return p3;
}

int main(){
    Polynomial p1(3),p2(3);

    cin>>p1;
    cin>>p2;

    Polynomial* sum=p1+p2;

    cout<<"First Polynomial: ";
    cout<<p1;

    cout<<"Second Polynomial: ";
    cout<<p2;

    cout<<"Sum of Polynomial: ";
    cout<<*sum;
    return 0;
}