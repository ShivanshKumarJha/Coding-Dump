#include<bits/stdc++.h>
using namespace std;

int main(){
    char array[1000];
    cin>>array;
    cout<<array<<endl;
    int i=0;
    char duplicate=array[0];
    while(array[i]!='\0'){
        int count=1;
        if(array[i]==array[i+1]){
            count++;i++;
            cout<<array[i]<<count;
        }
        else{
            cout<<array[i]<<count;
            if(array[i+1]=='\0')
                break;
        }
        i++;
    }
    return 0;
}