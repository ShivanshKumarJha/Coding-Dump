#include<iostream>
using namespace std;

void InsertionSort(int a[],int size){
    for(int i=1;i<size;i++){
        int current=a[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(current<a[j])
                a[j+1]=a[j];
            else
                break;
        }
        a[j+1]=current;
    }
}

int main(){
    int a[]={10,2,5,3,6,4};
    InsertionSort(a,6);
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}