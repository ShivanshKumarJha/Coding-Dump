#include<iostream>
using namespace std;
int sum(int n){
    int sum_of_digits=0;
    while(n>0){
        int lastdigit=n%10;
        sum_of_digits+=lastdigit;
        n=n/10;
    }
    return sum_of_digits;
}

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int c=sum(n);
    cout<<"The sum of digts are "<<c<<endl;
    return 0;
}