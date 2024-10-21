#include<stdio.h>
int multiple(int* i){
    int temp=*i;
    printf("%d\n",temp*10);
}

int main(){
    int i=10;
    multiple(&i);
    return 0;
}