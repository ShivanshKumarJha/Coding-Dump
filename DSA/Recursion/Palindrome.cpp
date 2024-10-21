#include<bits/stdc++.h>
using namespace std;

bool Helper(string S,int start,int end){
    if(end-start<1){
        return true;
    }
    else
        if(S[start]==S[end])
            Helper(S,start+1,end-1);
        else
            return false;
}

bool IsPalindrome(string S){
    if(Helper(S,0,S.length()-1)==true)
        return true;
    else    
        return false;
}

int main(){
    cout<<boolalpha;
    cout<<IsPalindrome("racecar")<<endl;
    cout<<IsPalindrome("ninja")<<endl;
    return 0;
}