#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return sum(n-1)+n;
    }
}

int main(){
    int total=sum(7);
    cout<<total<<endl;
    return 0;
}