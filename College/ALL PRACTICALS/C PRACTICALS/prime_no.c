#include<stdio.h>
#include<math.h>
int prime(int n){
    int flag=0;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("Prime Number\n");
    }
    else{
        printf("Non-Prime Number\n");
    }
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    prime(n);
    return 0;
}