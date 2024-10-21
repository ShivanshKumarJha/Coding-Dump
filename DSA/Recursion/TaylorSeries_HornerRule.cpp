#include<bits/stdc++.h>
using namespace std;

double e(int x,int n){
    static double s=1;
    if(n==0)
        return s;
    s=1+x*s/n;
    return e(x,n-1);
}

int main(){
    double value=e(1,10);
    cout<<value<<endl;
    return 0;
}