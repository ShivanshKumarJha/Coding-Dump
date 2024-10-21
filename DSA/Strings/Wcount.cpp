#include<bits/stdc++.h>
using namespace std;

int main(){
    char A[]="How Are   You";
    int i,word=0;
    for(i=0;A[i]!='\0';i++){
        if(A[i]==' ' and A[i-1]!=' ')
            word++;
    }
    cout<<word+1<<endl;
}