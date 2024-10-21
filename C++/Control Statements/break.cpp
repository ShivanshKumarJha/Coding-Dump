#include<iostream>
using namespace std;

int main(){
    //break stop at that loop and completely exit the loop
    //contine to skip the particular iteration and goes for
    //new value of i
    for(int i=1;i<=40;i++){
        cout<<i<<endl;
        if(i==5){
            break;
        }
    }
    return 0;
}