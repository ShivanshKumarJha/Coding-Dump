#include<stdio.h>
#include<string.h>
typedef struct employee{
    int code;
    float salary;
    char name[10];
}emp;

void show(struct employee emp){
    printf("The value of employee code is: %d\n",emp.code);
    printf("The value of the employee salary is: %.2f\n",emp.salary);
    printf("The value of the employee name is: %s\n",emp.name);
}

int main(){
    emp e1;  //We can use directly emp e1;    
    emp *ptr=&e1;
    ptr->code=101;
    ptr->salary=123.12;
    strcpy((*ptr).name,"Shivansh");
    show(e1);
    return 0;
}