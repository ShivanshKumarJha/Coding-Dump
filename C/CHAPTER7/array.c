#include<stdio.h>

int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }

    char array[5]={'a','b','c','d','e'};
    for(int i=0;i<5;i++){
        printf("%c\n",array[i]);    
    }

    int array_2[5];
    for (int i = 0; i < 5; i++){
        scanf("%d",&array_2[i]);   
    }

    for (int i = 0; i < 5; i++){
        printf("%d\n",array_2[i]);
    }
    return 0;
}