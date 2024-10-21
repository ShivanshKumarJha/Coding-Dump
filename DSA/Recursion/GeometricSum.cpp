#include<bits/stdc++.h>
using namespace std;

double GeometricSum(int k){
    if(k==0)
        return 1;
    else{
        double f=GeometricSum(k-1);
        double result=1/(pow(2,k));
        f+=result;
        return f;
    }
}

int main(){
    cout<<GeometricSum(3);
    return 0;
}