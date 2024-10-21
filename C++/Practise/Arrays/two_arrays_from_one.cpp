#include<bits/stdc++.h>
using namespace std;
void display(vector<int> v,int l){
    for(int i=0;i<l;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void split(int *p,int n){
    vector<int> veven;
    vector<int> vodd;
    int veven_len=0;
    int vodd_len=0;
    for(int i=0;i<20;i++){
        if(p[i]%2==0){
            veven.push_back(p[i]);
            veven_len++;
        }
        else{
            vodd.push_back(p[i]);
            vodd_len++;
        }
    }
    cout<<"Arrays Of Even Numbers"<<endl;
    display(veven,veven_len);
    cout<<endl;
    cout<<"Arrays Of Odd Numbers"<<endl;
    display(vodd,vodd_len);
    cout<<endl;
}

int main(){
    int arr[20];
    for(int i=0;i<20;i++){
        cin>>arr[i];
    }
    split(arr,20);
    return 0;
}