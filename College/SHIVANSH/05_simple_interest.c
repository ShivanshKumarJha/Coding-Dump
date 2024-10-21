#include<stdio.h>

int main(){
    int principal,rate,time;
    printf("Enter the Principal Amount\n");
    scanf("%d",&principal);
    printf("Enter the Rate Of Interest\n");
    scanf("%d",&rate);
    printf("Enter the time in years\n");
    scanf("%d",&time);
    printf("The Simple Interest is Rs. %d\n",(principal*rate*time)/100);
    return 0;
}       