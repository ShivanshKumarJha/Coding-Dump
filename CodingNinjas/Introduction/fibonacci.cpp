#include<bits/stdc++.h>
using namespace std;

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
    int n;
    cin>>n;
    int F1=1;
    int F2=1;
    for(int i=3;i<n;i++){
        int temp=F1;
        F1=F2;
        F2=temp+F1;
    }
    cout<<F1+F2<<endl;
    
}