#include<bits/stdc++.h>
using namespace std;

bool IsValid(char *name){
    int i;
    for(i=0;name[i]!='\0';i++){
        if(!(name[i]>=65 and name[i]<=90) and !(name[i]>=97 and name[i]<=122) and !(name[i]>=48 and name[i]<=57)){
            return false;
        }
    }
    return true;
}

int main(){
    cout<<boolalpha;
    char name[]="Ani?321";
    cout<<IsValid(name)<<endl;
}