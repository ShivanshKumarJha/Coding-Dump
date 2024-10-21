#include<bits/stdc++.h>
using namespace std;

void print(int n){
    if(n>1){
        print(n-1);
        cout<<n<<" ";
    }
    else{
        cout<<"1 ";
    }
}
 
int main(){
    print(10);
    cout<<endl;
    return 0;
}