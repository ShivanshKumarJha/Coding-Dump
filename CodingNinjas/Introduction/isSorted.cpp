#include<bits/stdc++.h>
using namespace std;

bool isSorted(int a[],int size){
    if(size==0 || size==1){return true;}
    if(a[0]>a[1]){return false;}

    bool isSmallSorted=isSorted(a+1,size-1);
    return isSmallSorted;
}

int main(){
    cout<<boolalpha;
    int a1[]={1,2,3,4,5,6};
    int a2[]={1,3,2,4,6,5};
    cout<<isSorted(a1,6)<<endl;
    cout<<isSorted(a2,6)<<endl;
    return 0;
}