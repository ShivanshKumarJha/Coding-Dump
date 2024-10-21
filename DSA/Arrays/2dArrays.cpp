#include<bits/stdc++.h>
using namespace std;

int main(){
    int A1[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    int *A2[3];
    A2[0]=new int[4];
    A2[1]=new int[4];
    A2[2]=new int[4];

    int **A3;
    A3=new int*[3];
    A3[0]=new int[4];
    A3[1]=new int[4];
    A3[2]=new int[4];

    return 0;
}