#include<bits/stdc++.h>
using namespace std;

int buyTicket(int *arr, int n, int k) {
    // Write your code here
    priority_queue<int> pq;
    queue<int> q;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        q.push(i);
    }
    int count=1;
    while(q.front()!=k || arr[q.front()]!=pq.top()){
        if(arr[q.front()]<pq.top()){int t=q.front();q.pop();q.push(t);}
        else if(arr[q.front()]==pq.top()){pq.pop();q.pop();count++;}
    }
    return count;
}

int main(){

    int input[]={3,9,4};
    int ans=buyTicket(input,3,2);
    cout<<ans;
    return 0;
}