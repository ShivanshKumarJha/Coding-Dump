#include<stdio.h>
int main(){
    int n,sum=0,i=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("The sum upto %d numbers is %d\n",n,sum);
    return 0;
}