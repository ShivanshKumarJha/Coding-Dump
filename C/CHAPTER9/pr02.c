#include<stdio.h>
struct vector{
    int x;
    int y;
};

struct vector sumVector(struct vector v1,struct vector v2){
    struct vector result;
    result.x=v1.x+v2.x;
    result.y=v1.y+v2.y;
    return result;
}
int main(){
    struct vector v1,v2,sum;
    struct vector *ptr=&v1;
    ptr->x=3;
    ptr->y=4;
    printf("The vector is %di + %dj\n",v1.x,v1.y);
    
    struct vector *ptr_2=&v2;
    ptr_2->x=6;
    ptr_2->y=8;
    printf("The vector is %di + %dj\n",v2.x,v2.y);
    sum=sumVector(v1,v2);
    printf("X dim is %d and Y dim is %d\n",sum.x,sum.y);
    return 0;
}