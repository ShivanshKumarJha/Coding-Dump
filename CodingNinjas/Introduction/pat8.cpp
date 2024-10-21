#include<iostream>
using namespace std;


int main(){

  // Write your code here
    int n;
    cin>>n;
    int i=n;
    while(i>0){
        int j=1;
        int k=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        while(k<=n-i){
            cout<<"*";
            k++;
        }
        k--;
        while(k>0){
            cout<<"*";
            k--;
        }
        j=i;
        while(j>0){
            cout<<j;
            j--;
        }
        cout<<endl;
        i--;
    }

}


