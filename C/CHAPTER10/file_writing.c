#include<stdio.h>
    
int main(){
    FILE *ptr;
    int number=45;
    ptr=fopen("Generated.txt","w");
    fprintf(ptr,"The number is %d\n",number);
    fclose(ptr);
    return 0;
}