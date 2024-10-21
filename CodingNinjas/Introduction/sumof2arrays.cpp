#include<iostream>
using namespace std;

void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    //Write your code here
    int i=size1-1,j=size2-1,size3;
    if(size1>size2){size3=size1+1;}
    else{size3=size2+1;}
    int k=size3-1;

    int extra=0;
    while(i>=0 && j>=0){
        output[k--]=(input1[i]+input2[j])%10+extra;
        extra=(input1[i]+input2[j])/10;i--;j--;
    }

    for(;i>=0;i--){
        output[k--]=input1[i]+extra;
        extra=(input1[i]+extra)/10;
    }

    for(;j>=0;j--){
        output[k--]=input2[j]+extra;
        extra=(input2[j]+extra)/10;
    }

    output[k]=extra;
}