#include<bits/stdc++.h>
using namespace std;

vector<int> returnUnique(int *arr,int n){
    unordered_map<int,bool> ans;
    vector<int> v;
    for(int i=0;i<n;i++){
        if(ans[arr[i]]==false){v.push_back(arr[i]);ans[arr[i]]=true;}
    }
    return v;
}

int main(){
    int arr[]={1,2,3,2,1,5,4,1,3};
    int n=9;
    vector<int> myAns=returnUnique(arr,n);
    for(auto i:myAns){cout<<i<<" ";}
    return 0;
}