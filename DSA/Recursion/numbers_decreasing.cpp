#include<bits/stdc++.h>
using namespace std;

void fun(int n){
    if(n==0){}
    else{
        cout<<n<<" ";
        fun(n-1);
    }
}

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    fun(n);
    cout<<endl;
}