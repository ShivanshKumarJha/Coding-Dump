// Sum of cube of each digits of a number gives the same number 
#include<iostream>
#include<math.h>
using namespace std;

int main(){ 
    int n,sum=0;
    cin>>n;
    int original_n=n;
    while(n>0){
        int lastdigit=n%10;
        sum=sum+pow(lastdigit,3);
        n=n/10;
    }
    if(sum==original_n){
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not A Armstrong Number"<<endl;
    }
    return 0;
}