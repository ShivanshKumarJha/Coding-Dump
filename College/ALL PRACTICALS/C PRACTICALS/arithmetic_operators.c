#include<stdio.h>
int main(){
    int a=4,b=3;
    int choice;
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Enter Your Choice\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("The sum is %d\n",a+b);
        break;
        
        case 2:
        printf("The difference is %d\n",a-b);
        break;
        
        case 3:
        printf("The product is %d\n",a*b);
        break;
        
        case 4:
        printf("The quotient is %d\n",a/b);
        break;
        
    }
    return 0;
}