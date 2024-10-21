#include<stdio.h>
void printArray(int *ptr,int n){
    for(int i=0;i<n;i++){
        printf("The value of element %d is %d\n",i+1,*(ptr+i));
    }    //ptr is address so we are dereferencing it with the    help of dereference opoerator
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    printArray(arr,7);
    return 0;
}

// we have to use *ptr to dereference the value of ptr 
// pointer is the variable that store the address of another variable