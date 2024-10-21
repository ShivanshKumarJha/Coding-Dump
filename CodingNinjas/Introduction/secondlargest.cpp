#include<iostream>
using namespace std;
#include <climits>


int main(){
    
    // Write your code here
    int n;
    cin>>n;
    int num,max1,max2;
    max1=max2=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>num;
        if(num>max1){
            max2=max1;
            max1=num;
        }
        else if(num<max1 && num>max2){
            max2=num;
        }
    } 
    cout<<max2<<endl;
}