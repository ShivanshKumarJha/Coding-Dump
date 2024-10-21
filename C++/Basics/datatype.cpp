#include<iostream>
using namespace std;

int c=4;
int main(){
    int a,b;
    cout<<"Enter the num1"<<endl;
    cin>>a;
    cout<<"Enter the num2"<<endl;
    cin>>b;
    cout<<"The local value of c is "<<a+b<<endl;
    cout<<"The global value of c is "<<::c<<endl;
    return 0;
}
// ::(variable name) is used to obtain global value
// Precedence order local>global
// Default datatype of decimal numbers are double(8)