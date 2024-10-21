#include<stdio.h>

int address(int i){
    printf("The address of i is %u\n",&i);
}

int main(){
    int i=1;
    printf("The address of i is %u\n",&i);
    address(i);
    return 0;
}

// Both Will Return Different Address
