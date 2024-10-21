#include<bits/stdc++.h>
using namespace std;

bool IsPalindrome(string A,int n){
    int i,j;
    for(i=0,j=n-1;i<=j;i++,j--){
        if(A[i]!=A[j])
            return false;
    }
    return true;
}

int main(){
    cout<<boolalpha;
    cout<<IsPalindrome("NITIN",5)<<endl;;
    cout<<IsPalindrome("WELCOME",7)<<endl;
    return 0;
}