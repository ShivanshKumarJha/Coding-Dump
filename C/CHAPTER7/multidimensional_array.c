#include<stdio.h>
    
int main(){
    int n_students=3;
    int n_subjects=5;
    int marks[3][5];
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            printf("Enter the marks of student %d in subject %d\n",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            printf("%d ",marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// 1 2 3 4 5 
// 2 3 4 5 6
// 1 2 3 4 5 

//2-D arrays are stored in single line array or 1-D array
//for above example we can conclude that it can be stored in memory as
// 1 2 3 4 5 2 3 4 5 6 1 2 3 4 5