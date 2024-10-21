#include<iostream>
using namespace std;
int sum(int a,int b);

int main(){
    cout<<"The sum of 4 and 5 is "<<sum(4,5)<<endl;     
    return 0;
}

int sum(int a,int b){
    int c=a+b;
    return c;
}