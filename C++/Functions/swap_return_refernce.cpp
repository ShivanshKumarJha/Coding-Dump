#include<iostream>
using namespace std;
int & swapReference(int &a,int &b);

int main(){
    int x=4,y=5;
    cout<<"The value of x is "<<x<<" and y is "<<y<<endl;
    swapReference(x,y)=766;
    cout<<"The value of x is "<<x<<" and y is "<<y<<endl;
    return 0;
}

int & swapReference(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    return a;
}
// Changes the value of a from 4 to 766