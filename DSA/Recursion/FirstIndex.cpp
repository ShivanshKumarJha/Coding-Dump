#include<bits/stdc++.h>
using namespace std;

int FirstIndex(int arr[],int size,int x){
    static int ans=0;
    if(size<=0)
        return -1;
    else if(arr[0]==x)
        return ans;
    else
        ans++;
        FirstIndex(arr+1,size-1,x);    
}

int main(){
    int arr[6]={1,6,2,5,5,2};
    cout<<FirstIndex(arr,6,2); 
    return 0;
}