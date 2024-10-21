#include<iostream>
using namespace std;
int main(){
    float x=455;
    float &y=x;
    cout<<"X is "<<x<<endl;
    cout<<"Y is "<<y<<endl;
    return 0;
}