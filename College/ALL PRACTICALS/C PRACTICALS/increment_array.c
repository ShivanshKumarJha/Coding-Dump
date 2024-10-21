#include<stdio.h>    
int main(){
    int n,j=0;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int *p=&arr[0];
    while(j<n){
        *p=*p+1;
        p++;
        j++;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}