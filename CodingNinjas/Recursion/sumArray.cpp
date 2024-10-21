#include<iostream>
using namespace std;

int sumOfArray(int a[],int size){
    if(size==0){return 0;}
    int smallOutput=sumOfArray(a+1,size-1);
    return smallOutput+a[0];
}

int main(){
    int a[]={1,2,5,6,9,10};
    cout<<sumOfArray(a,6)<<endl;
    return 0;
}