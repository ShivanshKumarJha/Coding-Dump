#include<stdio.h>
#include<string.h>
typedef struct date{
    int day,month,year;
}d;

int comp(d d1,d d2){
    if(d1.year>d2.year){
        return 1;
    }
    if(d1.year<d2.year){
        return -1;
    }
    if(d1.month>d2.month){
        return 1;
    }
    if(d1.month<d2.month){
        return -1;
    }
    if(d1.day>d2.day){
        return 1;
    }
    if(d1.day<d2.day){
        return -1;
    }
    else{
        return 0;
    }
}

int main(){
    d d1={1,5,2021};
    d d2={1,6,2020};
    int c=comp(d1,d2);
    printf("The value is %d\n",c);
    return 0;
}