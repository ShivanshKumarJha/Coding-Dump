#include<stdio.h>
#include<string.h>
int main(){
    char st1[20];
    char st2[20];
    printf("Enter the string you want to copy: ");
    gets(st1);
    strcpy(st2,st1);
    printf("The string st2 is: %s\n",st2);
    return 0;
}