#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int x;
    cin>>x;
    int count=0;
    int i=1;
    for(;i<=x;i++){
        if(((3*i)+2)%4!=0){
            cout<<(3*i)+2<<" ";
            count++;
        }
    }
    while(count!=x){
        if(((3*i)+2)%4!=0){
            cout<<(3*i)+2<<" ";
            count++;
        }
        i++;
    }
}
