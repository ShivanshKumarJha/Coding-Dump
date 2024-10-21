#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
    cin>>n;
    int num=0;int i=1;
    while(n!=0){
        int remainder=n%2;
        num=num+(remainder*i);
        n/=2;i*=10;
    }
    cout<<num<<endl;
}