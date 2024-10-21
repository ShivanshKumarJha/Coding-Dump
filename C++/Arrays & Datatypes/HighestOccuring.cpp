#include<bits/stdc++.h>
using namespace std;

char HighestOccuring(char s[]){
    int H[26]={0};
    for(int i=0;s[i]!='\0';i++){
        H[s[i]-97]++;
    }
    int max=H[0],j;
    for(int i=0;i<26;i++){
        if(H[i]>max){
            max=H[i];
            j=i;
        }
    }
    return (char) j+97;
}

int main(){
    char S[]="abdefgbabfba";
    cout<<HighestOccuring(S)<<endl;
}