#include<iostream>
using namespace std;

int main(){
    // * / % + - Precedence order
    // for same precedence move from left to right
    int a=3,b=4;
    int c=a*5+b-45+87;
    cout<<"The value of the expression a*5+b-45+87 is: "<<c<<endl;
    return 0;
}