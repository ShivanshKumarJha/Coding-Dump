#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=10,b=0,c;
    try{
        if(b==0)
        throw 1;
        c=a/b;
        cout<<c<<endl;
    }
    catch (int e){
        cout<<"Division by Zero is not possible"<<endl;
    }
    return 0;
}