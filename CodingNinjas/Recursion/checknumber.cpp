#include<bits/stdc++.h>
using namespace std;

bool isPresent(int a[],int size,int x){
    if(size==0){return false;}
    if(a[0]==x){return true;}
    isPresent(a+1,size-1,x);
}

int main(){
    cout<<boolalpha;
    int a[]={1,6,2,5,9,0,11,20,7,4};
    cout<<isPresent(a,10,3)<<endl;
    cout<<isPresent(a,10,5)<<endl;
    return 0;
}