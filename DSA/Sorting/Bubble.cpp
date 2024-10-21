#include<iostream>
using namespace std;

void BubbleSort(int input[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(input[j]>input[j+1]){
                int temp=input[j];
                input[j]=input[j+1];
                input[j+1]=temp;
            }
        }
    }
}

int main(){
    int input[]={1,7,4,0,9,4};
    BubbleSort(input,6);
    for(int i=0;i<6;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}


