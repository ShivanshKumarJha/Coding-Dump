#include<iostream>
#include<math.h>
using namespace std;
int fact(int num){
    int r=1;
    for(int i=1;i<=num;i++){
        r*=i;
    }
    return r;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            int c=fact(i)/(fact(i-j)*fact(j));
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}