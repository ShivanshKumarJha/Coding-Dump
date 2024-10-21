#include<bits/stdc++.h>
using namespace std;

int Zeroes(int n){
    if(n%10!=0 and n>0){
        Zeroes(n/10);
    }
    else if(n%10==0 and n>0){
        return 1+Zeroes(n/10);
    }
}

int main(){
    int n;
    cin>>n;
    cout<<Zeroes(n)<<endl;
    return 0;
}