#include<stdio.h>
typedef struct complex{
    int real;
    int imaginary;
}comp;

void display(comp c){
    printf("The value of real part is %d\n",c.real);
    printf("The value of imaginary part is %d\n",c.imaginary);
}

int main(){
    comp cnums[5];
    for(int i=0;i<5;i++){
        printf("Enter the real part\n");
        scanf("%d",&(cnums[i].real));
        printf("Enter the imaginary part\n");
        scanf("%d",&(cnums[i].imaginary));
    }
    for(int j=0;j<5;j++){
        display(cnums[i]);
    }
    return 0;
}