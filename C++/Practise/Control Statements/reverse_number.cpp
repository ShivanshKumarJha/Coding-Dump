#include<iostream>
using namespace std;
int reverseNumber(int n){
    int reverse=0;
    while(n>0){
        int lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n=n/10;
    }
    return reverse;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int c=reverseNumber(n);
    cout<<c<<endl;
    return 0;
}   