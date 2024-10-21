#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter Three Numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d is the greatest no.",a);
    }
    else if(b>c && b>a){
        printf("%d is the greatest no.",b);
    }
    else if(c>a && c>b){
        printf("%d is the greatest no.",c);
    }
    else{
        printf("All Numbers Are Equal");
    }
    return 0;
}