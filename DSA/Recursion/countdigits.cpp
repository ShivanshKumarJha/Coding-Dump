#include<iostream>
using namespace std;

int NumberOfDigits(int n){
    if(n/10==0){return 1;}
    return 1+NumberOfDigits(n/10);
}

int main(){
    int n;
    cin>>n;
    cout<<NumberOfDigits(n)<<endl;
    return 0;
}