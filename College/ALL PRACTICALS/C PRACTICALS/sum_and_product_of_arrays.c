#include<stdio.h>    
int main(){
    int row,column;
    printf("Enter the no of rows and columns\n");
    scanf("%d%d",&row,&column);
    int arr[row][column];
    int sum=0,product=1;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("Enter the arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
            sum+=arr[i][j];
            product*=arr[i][j];
        }
    }
    printf("The sum of all elements are %d\n",sum);
    printf("The product of all elements are %d\n",product);
    return 0;
}