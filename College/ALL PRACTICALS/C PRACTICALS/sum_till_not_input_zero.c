#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the numbers\n");
    scanf("%d",&n);
    while(n!=0){
        sum+=n;
        scanf("%d",&n);
    }
    printf("The sum is %d\n",sum);
    return 0;
}