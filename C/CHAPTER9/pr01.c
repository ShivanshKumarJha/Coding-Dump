#include<stdio.h>
struct vector{
    int x;
    int y;
};

int main(){
    struct vector v1,v2;
    struct vector *ptr=&v1;
    ptr->x=3;
    ptr->y=4;
    printf("The vector is %di + %dj\n",v1.x,v1.y);
    
    struct vector *ptr_2=&v2;
    ptr_2->x=6;
    ptr_2->y=8;
    printf("The vector is %di + %dj\n",v2.x,v2.y);
    return 0;
}
    