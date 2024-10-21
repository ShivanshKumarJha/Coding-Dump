#include<stdio.h>
int main(){
    int num;
    printf("Enter Your Marks\n");
    scanf("%d",&num);
    if(num>85){
        printf("GRADE A\n");
    }
    if(num<=85 && num>70){
        printf("GRADE B\n");
    }
    if(num<=70 && num>60){
        printf("GRADE C\n");
    }
    if(num<=60 && num<35){
        printf("GRADE D\n");
    }
    if(num<=30){
        printf("GRADE E\n");
    }
    return 0;
}