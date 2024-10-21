#include<iostream>
using namespace std;

int main(){

  // Write your code here  
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=i;
        int k=1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
        while(j>0){
            cout<<j;
            j--;
        }
        j++;j++;
        while(j<=i && i>1){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
  
}

