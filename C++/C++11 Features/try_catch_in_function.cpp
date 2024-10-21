#include<bits/stdc++.h>
using namespace std;
int Division(int a,int b){
    if(b==0){
        throw 1;
    }
    else{
        return a/b;
    }
}

int main(){
    int a=10,b=0,c;
    try{
        int c=Division(a,b);
        cout<<c<<endl;
    }
    catch(int e){
        cout<<"Division by zero is not possible"<<endl;
    }
    cout<<"Program Executed"<<endl;
    return 0;
}