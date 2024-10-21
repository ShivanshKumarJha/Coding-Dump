#include<bits/stdc++.h>
using namespace std;

void bfs(int src,vector<int> graph[],int v,int& ans){
    vector<int> dis(v,INT_MAX);
    queue<int> q;
    q.push(src);
    dis[src]=0;

    while(!q.empty()){
        int curr=q.front();
        q.pop();
        for(auto nbr:graph[curr]){
            if(dis[nbr]==INT_MAX){
                dis[nbr]=dis[curr]+1;
                q.push(nbr);
            }
            else if(dis[nbr]>=dis[curr])
                ans=min(ans,dis[nbr]+dis[curr]+1);
        }
    }
}

int main(){
    int v,e;
    cin>>v>>e;
    vector<int> graph[v];
    while(e--){
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    int ans=INT_MAX;
    for(int i=0;i<v;i++){
        bfs(i,graph,v,ans);      
    }
    if(ans==INT_MAX)
        cout<<"No Cycle\n";
    else
        cout<<"Shortest Cycle is of length "<<ans<<"\n";
    return 0;
}