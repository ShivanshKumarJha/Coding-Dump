#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,flag=0;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=2;i<sqrt(n);i++){
        // cout<<"Non-Prime Number"<<endl;
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Prime Number"<<endl;
    }
    else{
        cout<<"Non-Prime Number"<<endl;
    }
    return 0;
}