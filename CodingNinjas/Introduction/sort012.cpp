#include<iostream>
using namespace std;

void sort012(int *arr, int n)
{
    //Write your code here
    int i=0,nz=0,nt=n-1;
    while(i<=nt){
        if(arr[i]==0){
            int temp=arr[i];arr[i]=arr[nz];arr[nz]=temp;
            i++;nz++;
        }
        else if(arr[i]==2){
            int temp=arr[i];arr[i]=arr[nt];arr[nt]=temp;
            nt--;
        }
        else{i++;}
    }
}

int main(){
    int a[]={0,1,2,0,1,2,0};
    sort012(a,7);
    for(int i=0;i<7;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}