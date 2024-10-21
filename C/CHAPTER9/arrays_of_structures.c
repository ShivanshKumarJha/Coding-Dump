#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee facebook[100]; 
    facebook[0].code=100;  
    facebook[0].salary=1000.20; 
    strcpy(facebook[0].name,"Shivansh");
    
    facebook[1].code=101;  
    facebook[1].salary=1200.20; 
    strcpy(facebook[1].name,"Ayush");
    
    facebook[2].code=102;  
    facebook[2].salary=1780.00; 
    strcpy(facebook[2].name,"Prateek");

    for(int j=3;j<4;j++){
        scanf("%d",&(facebook[j].code));
        scanf("%f",&(facebook[j].salary));
        scanf("%s",&(facebook[j].name));
    }

    for(int i=0;i<4;i++){
        printf("%d ",facebook[i].code);
        printf("%.2f ",facebook[i].salary);
        printf("%s ",facebook[i].name);
        printf("\n");
    }
    return 0;
}