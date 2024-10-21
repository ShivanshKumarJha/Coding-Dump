#include<iostream>
using namespace std;

inline product(int a, int b){
    static int c=0;          //This executes only once and then the 
    c=c+1;             //value changes to 1 and on the next func call
    return a*b+c;     //it will show the value 1 then 2 then 3 etc.
}

int main(){
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    return 0;
}