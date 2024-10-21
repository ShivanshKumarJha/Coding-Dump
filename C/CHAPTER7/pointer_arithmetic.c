#include<stdio.h>
    
int main(){
    int i=34;
    int *ptr=&i;                                  //Increased the value of ptr by 4
    printf("The value of ptr is %u\n",ptr);
    ptr++;
    printf("The value of ptr is %u\n",ptr);
    ptr++;
    printf("The value of ptr is %u\n",ptr);
    ptr--;
    printf("The value of ptr is %u\n",ptr);
    return 0;
} 