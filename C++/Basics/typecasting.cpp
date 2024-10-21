#include<iostream>
using namespace std;
int main(){
    int a=45;
    float b=45.46;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"The value of a+b is "<<a+(int)b<<endl;
    cout<<"The value of a+b is "<<a+int(b)<<endl;    
    return 0;
}
