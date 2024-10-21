#include<stdio.h>   
int main(){
    int  n;
    float sum=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("The average of numbers are %.2f\n",(sum/n));
    return 0;
}