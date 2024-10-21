#include<stdio.h>
void encrypt(char *c){
    char *ptr=c;
    while(*ptr!='\0'){
        *ptr=*ptr+1;
        ptr++;
    }
}

void decrypt(char *c){
    char *ptr=c;
    while(*ptr!='\0'){
        *ptr=*ptr-1;
        ptr++;
    }
}

int main(){
    char c[]="shivansh";
    encrypt(c);
    printf("The encrypted string is: %s\n",c);
    char c_2[]="tijwboti";
    decrypt(c_2);
    printf("The decrypted string is: %s\n",c_2);
    return 0;
}