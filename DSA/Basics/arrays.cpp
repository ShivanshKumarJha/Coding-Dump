#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++) 
        cin>>A[i];
    for(int x:A)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}