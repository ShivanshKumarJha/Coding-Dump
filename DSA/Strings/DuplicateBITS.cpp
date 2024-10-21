// Setting the BIT on in a memory is known as Merging (using |)
// Checking whether the BIT is on/off in a memory is known as Masking (using &)

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main(){
    char A[]="finding";
    long int H=0;
    int x=0;
    for(int i=0;A[i]!='\0';i++){
        x=1;
        x=x<<(A[i]-97);
        if((x&H)>0)
            printf("%c is duplicate\n",A[i]);
        else
            H=x|H;
    }
    return 0;
}