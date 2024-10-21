#include<bits/stdc++.h>
using namespace std;

double e(int x,int n){
    static double p=1,f=1;
    if(n==0){
        return 1;
    }
    else{
        double r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+(p/f);
    }
}

int main(){
    double value=e(1,10);
    cout<<value<<endl;
    return 0;
}