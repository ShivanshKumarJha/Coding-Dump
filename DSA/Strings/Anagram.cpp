// Anagram are two set of strings which are form using same set of alphabets
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main(){
    string A="decimal";
    string B="medical";
    int H[26]={0},i;
    for(i=0;i<A.length();i++)  
        H[A[i]-97]++;
    for(i=0;i<B.length();i++){
        H[A[i]-97]--;
        if((H[A[i]-97])<0){
            printf("Not Anagram\n");
            break;
        }
    }
    if(B[i]=='\0')
        printf("Anagram\n");
    return 0;
}

//Time Complexity:O(n)

//If there are duplicates