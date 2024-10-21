#include<stdio.h>
    int main(){
    int n,sum=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    printf("The sum of first %d natural numbers are %d\n",n,sum);
    return 0;
}