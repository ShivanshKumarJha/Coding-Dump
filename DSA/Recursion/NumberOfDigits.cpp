#include<bits/stdc++.h>
using namespace std;

int NumberOfDigits(long long n){
    if(n/10==0)
        return 1;
    return 1+NumberOfDigits(n/10);
}

int main(){
    cout<<NumberOfDigits(12345)<<endl;
    cout<<NumberOfDigits(2536474)<<endl;
    return 0;
}