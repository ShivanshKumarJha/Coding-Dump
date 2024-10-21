#include<stdio.h>
#include<string.h>

int main(){
    char st[45]="Shivansh";
    //Tells the length of string excluding the null charater
    int a=strlen(st);
    printf("The length of string is %d\n",a);

    char st2[45];
    //Copies the content of second string to the first string
    strcpy(st2,st);
    printf("The value of st2 is %s\n",st2);
 
    char *st3="KumarJha";
    //Used to concatenate two strings
    strcat(st,st3);
    printf("Now the value of st is %s\n",st);

    //Used to compare the two strings
    //ASCII(string1-string2)
    //if it is +ve it return 1
    //if it is -ve it return -1
    //if string is same it return 0
    int c=strcmp(st,st3);
    printf("The value of c is %d\n",c);
    return 0;
}