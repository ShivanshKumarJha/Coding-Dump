#include<stdio.h>
void sum_avg(int a,int b,int *sum,float *avg){
    *sum=a+b;
    *avg=*sum/2;
}
    
int main(){
    int a,b,sum;
    float avg;
    printf("Enter the first number\n");
    scanf("%d",&a);
    printf("Enter the second number\n");
    scanf("%d",&b);
    sum_avg(a,b,&sum,&avg);
    printf("The value of sum is %d\n",sum);
    printf("The value of average is %f\n",avg);
    return 0;
}