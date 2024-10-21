#include<stdio.h>
typedef struct time{
    int hr,min,sec;
}t;

int comp(t t1,t t2){
    if(t1.hr>t2.hr){
        return 1;
    }
    if(t1.hr<t2.hr){
        return -1;
    }
    if(t1.min>t2.min){
        return 1;
    }
    if(t1.min<t2.min){
        return -1;
    }
    if(t1.sec>t2.sec){
        return 1;
    }
    if(t1.sec<t2.sec){
        return -1;
    }
    else{
        return 0;
    }
}

int main(){
    t t1={12,13,60};
    t t2={1,23,12};
    int c=comp(t1,t2);
    printf("The value is %d\n",c);
    return 0;
}