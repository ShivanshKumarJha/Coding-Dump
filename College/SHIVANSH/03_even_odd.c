#include<stdio.h>

int main(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(num%2==0){
        printf("Even Number\n");
    }
    else{
        printf("Odd \n");
    }
    return 0;
}