#include<stdio.h>
#include<stdbool.h>
bool check(char st[],char c){
    char *ptr=st;
    while(*ptr!='\0'){
        if(*ptr==c){
            return true;
        }
        ptr++;
    }
    return false;
}  

int main(){
    char st[]="shivansh";
    if(check(st,'s')==true){
        printf("Yes\n");
    }
    return 0;
}