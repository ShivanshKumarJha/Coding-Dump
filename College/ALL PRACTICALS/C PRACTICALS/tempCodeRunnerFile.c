#include<stdio.h>    
void sum(int num1,int num2){
    printf("The sum is %d\n",num1+num2);
}
void average(int num1,int num2){
    printf("The average is %.2f\n",(float)(num1+num2)/2);
}
int main(){
    int num1,num2;
    printf("Enter the two numbers: ");
    scanf("%d%d",&num1,&num2);
    sum(num1,num2);
    average(num1,num2);
    return 0;
}