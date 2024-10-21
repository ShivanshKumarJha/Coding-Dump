#include<stdio.h>
    
int main(){
    int marks[3][10];
    for(int i=0;i<10;i++){
        marks[0][i]=2*(i+1);
    }
    for(int i=0;i<10;i++){
        marks[1][i]=7*(i+1);
    }
    for(int i=0;i<10;i++){
        marks[2][i]=9*(i+1);
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            printf("%d ",marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}