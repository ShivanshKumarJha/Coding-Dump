#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
    cin>>n;
    if(n==0)
        cout<<"0"<<endl;
    for(int i=1;i<=n;i++){
        if(((i*i)<=n) && (((i+1)*(i+1))>n)){
            cout<<i<<endl;
            break;
    	}
    }
}
