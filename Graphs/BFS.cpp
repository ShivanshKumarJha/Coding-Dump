#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Graph{
    public:
    map<T,list<T>> l;

    void addEdge(int x,int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void bfs(T src){
        map<T,int> visited;
        queue<T> q;

        q.push(src);
        visited[src]=true;

        while(!q.empty()){
            T node=q.front();
            q.pop();
            cout<<node<<endl;

            for(auto nbr:l[node]){
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr]=true;
                }
            }
        } 
    }
};
