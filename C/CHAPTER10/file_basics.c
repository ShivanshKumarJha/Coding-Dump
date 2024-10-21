#include<stdio.h>    
int main(){
    FILE *ptr;
    ptr=fopen("sample.txt","r"); //->For reading the file
    ptr=fopen("sample.txt","w"); //->For writing the file
    fclose(ptr);
    return 0;
}