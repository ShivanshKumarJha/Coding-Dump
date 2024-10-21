#include<stdio.h>
    
int main(){
    int marks[4];
    int *ptr=&marks[0];
    for (int i = 0; i < 4; i++){
        printf("Enter the marks of %dth student:\n",i+1);
        scanf("%d",ptr);
        ptr++;
    }
    for (int i = 0; i < 4; i++){
        printf("The marks of student %d is %d\n",i+1,marks[i]);
    }
    return 0;
}