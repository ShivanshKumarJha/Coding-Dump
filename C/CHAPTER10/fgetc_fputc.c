#include<stdio.h>
    
int main(){
    FILE *ptr;
    ptr=fopen("getcdemo.txt","r");
    // char c=fgetc(ptr);
    // printf("The value of my character is %c\n",fgetc(ptr));
    // printf("The value of my character is %c\n",fgetc(ptr));
    // printf("The value of my character is %c\n",fgetc(ptr));
    // printf("The value of my character is %c\n",fgetc(ptr));
    // printf("The value of my character is %c\n",fgetc(ptr));
    ptr=fopen("putcdemo.txt","w");
    putc('c',ptr);   //Write the character c in file putcdemo.txt
    fclose(ptr);
    return 0;
}