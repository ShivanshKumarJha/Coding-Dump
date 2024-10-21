#include<bits/stdc++.h>
using namespace std;

vector<int> kSmallest(int arr[], int n, int k) {
    // Write your code here
    priority_queue<int> pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    for(int i=k;i<n;i++){
        if(arr[i]<pq.top()){pq.pop();pq.push(arr[i]);}
    }
    vector<int> v;
    for(int i=0;i<k;i++){
        v.push_back(pq.top());
        pq.pop();
    }
    return v;
}

int main(){
    int input[]={2,12,9,16,10,5,3,20,25,11,1,8,6};
    int n=13;
    int k=4;
    vector<int> ans=kSmallest(input,n,k);
    for(auto i:ans){cout<<i<<" ";}
    return 0;
}