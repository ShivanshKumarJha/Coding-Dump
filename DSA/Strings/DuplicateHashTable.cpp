#include<bits/stdc++.h>
using namespace std;

int main(){
    char A[]="finding";
    int H[26]={0};
    for(int i=0;A[i]!='\0';i++){
        H[A[i]-97]++;
    }
    for(int i=0;i<26;i++){
        if(H[i]>1){cout<<(char) (i+97)<<" "<<H[i]<<endl;}
    }
    cout<<endl;
    return 0;
}

// Time Complexity:O(n+n)=O(n)