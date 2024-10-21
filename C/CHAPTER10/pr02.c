#include<stdio.h>
    
int main(){
    FILE *ptr;
    ptr=fopen("table.txt","w");
    for(int i=1;i<=10;i++){
        fprintf(ptr,"%d x %d = %d\n",5,i,5*i);
    }
    fclose(ptr);
    return 0;
}