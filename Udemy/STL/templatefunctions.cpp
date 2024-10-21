#include<iostream>
#include<fstream>
#include<sstream>
#include<iomanip>
#include<cmath>
#include<string>
#include<vector>
#include<memory>
#include<set>
using namespace std;

template<typename T>
T MIN(T a,T b){
    return (a<b)?a:b;
}

template<typename T1,typename T2>
void func(T1 a,T2 b){
    cout<<a<<" "<<b<<endl;
}

struct Person{
    string name;
    int age;
    bool operator<(const Person &rhs) const{
        return this->age < rhs.age;
    }
};

ostream &operator<<(ostream &os,const Person &p){
    os<<p.name;
    return os;
}

template<typename T>
void my_swap(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}

int main(){
    int x=100,y=200;
    cout<<"x="<<x<<" y="<<y<<endl;
    my_swap(x,y);
    cout<<"x="<<x<<" y="<<y<<endl;

    Person p1 {"Curly",50};
    Person p2 {"Moe",30};
    Person p3=MIN(p1,p2);
    cout<<p3.name<<" is younger"<<endl;

    cout<<MIN<int>(2,3)<<endl;
    cout<<MIN(2,3)<<endl;
    cout<<MIN('A','B')<<endl;
    cout<<MIN(12.5,9.2)<<endl;
    cout<<MIN(5+2*2,7+40)<<endl;

    func(p1,p2);
    func<int,int>(10,20);
    func(10,20);
    func<char,double>('A',12.4);
    func('A',12.4);
    func(1000,"Testing");
    func(2000,string{"Shivansh"});
    return 0;
}