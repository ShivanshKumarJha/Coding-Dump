#include<bits/stdc++.h>
using namespace std;

int Multiplication(int m,int n){
    if(m<n){
        return Multiplication(n,m);
    }
    else if(n!=0){
        return (m+Multiplication(m,n-1));
    }
    else    
        return 0;
}

int main(){
    int m,n;
    cin>>m>>n;
    cout<<Multiplication(m,n);
}