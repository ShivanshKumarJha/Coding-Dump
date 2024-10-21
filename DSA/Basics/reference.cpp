#include<bits/stdc++.h>
using namespace std;

int main(){
    //Reference is the nickname given to the variable or the alias to the variable
    //We cannot change the reference
    int a=10;
    int &r=a;
    cout<<"a:"<<a<<" "<<" r:"<<r<<endl;
    r++;
    cout<<"a:"<<a<<" "<<" r:"<<r<<endl;
    int b=25;
    r=b;
    cout<<"a:"<<a<<" "<<" r:"<<r<<endl;
    return 0;
}