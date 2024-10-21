#include<iostream>
using namespace std;

void SelectionSort(int input[],int size){
    for(int i=0;i<size-1;i++){
        int min=input[i],minIndex=i;
        for(int j=i+1;j<size;j++){
            if(input[j]<min){
                minIndex=j;
                min=input[j];
            }
        }
        int temp=input[i];
        input[i]=input[minIndex];
        input[minIndex]=temp;
    }
}

int main(){
    int input[]={6,1,4,2,8,3};
    SelectionSort(input,6);
    for(int i=0;i<6;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}