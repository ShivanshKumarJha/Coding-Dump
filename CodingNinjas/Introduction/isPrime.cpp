#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int d=2;bool isPrime=false;
    while(d<sqrt(n)){
        if(n%d==0){
            cout<<"Not a Prime"<<endl;
            isPrime=true;
        }
        d++;
    }
    if(!isPrime)
        cout<<"Prime Number"<<endl;
}