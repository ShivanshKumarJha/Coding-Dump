#include<iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    //Write your code here
    for(int i=0;i<size;i++){
        bool unique=true;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j] && i!=j){
                unique=false;
                break;
            }
        }
        if(unique){return arr[i];}
    }
}

int main(){
    int a[]={0,2,1,3,1};
    cout<<findUnique(a,5)<<endl;
}