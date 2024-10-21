#include<iostream>
using namespace std;
int factorial(int a){
    if(a<=1){
        return 1;
    }
    return a*factorial(a-1);
}
int main(){
    int a;
    cout<<"Enter the Number"<<endl;
    cin>>a;
    cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
    return 0;
}