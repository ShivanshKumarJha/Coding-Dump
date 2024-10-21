#include<iostream>
using namespace std;
int sum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int c=sum(n);
    cout<<c<<endl;
    return 0;
}