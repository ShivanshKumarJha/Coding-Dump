#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee shivansh={100,123456.23,"Shivansh"};
    printf("Name is %s \n",shivansh.name);
    printf("Code is %d \n",shivansh.code);
    printf("Salary is %.2f \n",shivansh.salary);
    return 0;
}