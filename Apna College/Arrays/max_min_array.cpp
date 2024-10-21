#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        if(array[i]>maxNo){
            maxNo=array[i];
        }
    }
    for(int i=0;i<n;i++){
        if(array[i]<minNo){
            minNo=array[i];
        }
    }

    cout<<"The maximum no. is "<<maxNo<<endl;
    cout<<"The minimum no. is "<<minNo<<endl;
    return 0;
}