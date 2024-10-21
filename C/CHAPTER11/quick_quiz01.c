#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int *ptr;
    ptr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf("Enter the value of %dth element\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++){
        printf("The value of %dth element is %d\n",i,ptr[i]);
    }
    return 0;
}