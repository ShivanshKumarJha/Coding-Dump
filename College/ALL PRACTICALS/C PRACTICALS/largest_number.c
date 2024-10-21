#include<stdio.h>
int main(){
    int a=4,b=5,c=10;
    if(a>b && a>c){
        printf("a is the largest number\n");
    }
    else if(b>c && b>a){
        printf("b is the largest number\n");
    }
    else if(c>a && c>b){
        printf("c is the largest number\n");
    }
    else{
        printf("All numbers are equal\n");
    }
    return 0;
}