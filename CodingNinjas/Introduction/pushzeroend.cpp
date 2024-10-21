#include<iostream>
using namespace std;

int main(){
    int input[]={5,8,7,4,3,1,8};
    int i=0,j=1;
    while(i<j && i<7 && j<7){
        while(input[i]!=0 && i<6){i++;}
        while(input[j]==0 && j<7){j++;}
        if(input[i]==0 && input[j]!=0){
            int temp=input[i];
            input[i]=input[j];
            input[j]=temp;
        }
        i++;j++;
    }
    for(int i=0;i<7;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}