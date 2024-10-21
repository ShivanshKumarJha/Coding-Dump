#include<stdio.h>
    
int main(){
    char st[]={'S','h','i','v','a','n','s','h','\0'};
    char *ptr="Shivansh Kumar Jha";
    for(int i=0;i<8;i++){
        if(st[i]!='\0'){
           printf("%c",st[i]); 
        }
    }
    printf("\n%s\n",ptr);
    return 0;
}