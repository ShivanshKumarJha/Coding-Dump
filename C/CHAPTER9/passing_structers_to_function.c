#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};    
void show(struct employee emp){
    printf("The Code of the employee is: %d\n",emp.code);
    printf("The Salay of the employee is: %.2f\n",emp.salary);
    printf("The Name of the employee is: %s\n",emp.name);
}

int main(){
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    // (*ptr).code=101; You can also use ptr->code
    ptr->code = 101;
    ptr->salary=1200.30;
    strcpy(ptr->name,"Shivansh");
    show(e1);
    return 0;
}