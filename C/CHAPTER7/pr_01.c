#include<stdio.h>
void check_if(int* ptr,int n){
    printf("The value of 3rd elemnet is %d\n",*(ptr+2));
}
    
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    check_if(arr,10);
    return 0;
}
//int *ptr=&arr[0] is same of int *ptr=arr