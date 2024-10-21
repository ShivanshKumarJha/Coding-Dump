#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int m,h;
        cin>>m>>h;
        int bmi=m/(h*h);
        if(bmi<=18){
            cout<<"1"<<endl;
        }
        else if(bmi>18 and bmi<=24){
            cout<<"2"<<endl;
        }
        else if(bmi>24 and bmi<=29){
            cout<<"3"<<endl;
        }
        else if(bmi>=30){
            cout<<"4"<<endl;
        }
    }
    return 0;
}