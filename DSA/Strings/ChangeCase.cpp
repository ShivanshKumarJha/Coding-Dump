#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main(){
    char S[]="WELcomE";
    for(int i=0;S[i]!='\0';i++){
        if(S[i]>=65 and S[i]<=90)
            S[i]+=32;
        else
            S[i]-=32;
    }
    printf("%s",S);
    return 0;
}