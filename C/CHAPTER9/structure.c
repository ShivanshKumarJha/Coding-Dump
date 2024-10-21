#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee e1;
    e1.code=34;
    e1.salary=500000;
    // e1.name="Shivansh";  Won't work
    strcpy(e1.name,"Shivansh");    
    printf("%d\n",e1.code);
    printf("%.2f\n",e1.salary);
    printf("%s\n",e1.name);
    
    struct employee e2;
    e2.code=35;
    e2.salary=200000;
    strcpy(e2.name,"Ayush");    
    printf("%d\n",e2.code);
    printf("%.2f\n",e2.salary);
    printf("%s\n",e2.name);
    
    struct employee e3;
    e3.code=36;
    e3.salary=600000;
    strcpy(e3.name,"Prateek");    
    printf("%d\n",e3.code);
    printf("%.2f\n",e3.salary);
    printf("%s\n",e3.name);
    return 0;
}