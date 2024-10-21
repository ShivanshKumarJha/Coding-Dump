#include<iostream>
using namespace std;

void Indexes(int A[],int size,int k){
    static int initial=size;
    if(size<=0)
        cout<<"Ended"<<endl;
    else if(A[0]==k){
        cout<<initial-size<<" ";
        Indexes(A+1,size-1,k);
    }
    else{
        Indexes(A+1,size-1,k);
    }
}

int main(){
    int A[10]={1,2,2,4,5,2,7,8,2,4};
    int size=sizeof(A)/sizeof(A[0]);
    Indexes(A,size,2);
    cout<<endl;
    return 0;
}