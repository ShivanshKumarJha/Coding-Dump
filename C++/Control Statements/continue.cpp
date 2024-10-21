#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=40;i++){
        cout<<i<<endl;
        if(i!=5){
            continue;  //if this condition is true then the
        }             //loop exit for both if and else and 
        else{        //goes to new iteration
            cout<<i<<endl;
        }
    }
    return 0;
}