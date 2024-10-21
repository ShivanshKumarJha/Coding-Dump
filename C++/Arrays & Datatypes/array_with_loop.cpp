#include<iostream>
using namespace std;

int main(){
    int marks[5]={45,56,89,98,77};
    int j=0,k=0;
    cout<<"With the help of For Loop"<<endl;
    for(int i=0;i<5;i++){
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    } 

    cout<<endl<<"With the help of While Loop"<<endl;
    while(j<5){
        cout<<"The value of marks "<<j<<" is "<<marks[j]<<endl;
        j++;
    }

    cout<<endl<<"With the help of Do-While Loop"<<endl;
    do{
        cout<<"The value of marks "<<k<<" is "<<marks[k]<<endl;
        k++;
    }while(k<5);
    
    cout<<endl;
    return 0;
}