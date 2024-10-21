#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main(){
    char A[]="python";
    char B[7];
    int i,j;
    char temp;
    for(i=0;A[i]!='\0';i++){}
    i--;
    for(j=0;i>=0;i--,j++){
        B[j]=A[i];
    }    
    B[j]='\0';
    printf("%s\n",B);

    for(j=0;A[j]!='\0';j++){}
    j--;
    for(i=0;i<j;j--,i++){
        char temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
    printf("%s\n",A);
}