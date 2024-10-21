#include<iostream>
using namespace std;
void swapReference(int &a,int &b);

int main(){
    int x=4,y=5;
    cout<<"The value of x is "<<x<<" and y is "<<y<<endl;
    swapReference(x,y);
    cout<<"The value of x is "<<x<<" and y is "<<y<<endl;
    return 0;
}

void swapReference(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}