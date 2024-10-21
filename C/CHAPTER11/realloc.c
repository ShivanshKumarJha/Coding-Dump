#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int *)malloc(6*sizeof(int));
    for(int i=0;i<6;i++){
        printf("Enter the value of %dth element\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<6;i++){
        printf("The value of %dth element is %d\n",i,ptr[i]);
    }
    //Realloacting 
    ptr=realloc(ptr,10*sizeof(int));
    for(int i=0;i<10;i++){
        printf("Enter the value of %dth element\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<10;i++){
        printf("The value of %dth element is %d\n",i,ptr[i]);
    }
    return 0;
} 