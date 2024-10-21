#include<stdio.h>
    
int main(){
    int salary;
    char name[30];
    FILE *ptr;
    ptr=fopen("employee.txt","a");
    for(int i=0;i<2;i++){
        printf("Enter the name of %dth employee\n",(i+1));
        scanf("%s",&name);
        printf("Enter the salary of %dth employee\n",(i+1));
        scanf("%d",&salary);
        fprintf(ptr,"%s , %d\n",name,salary);
    }
    return 0;
}