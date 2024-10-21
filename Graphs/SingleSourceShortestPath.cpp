#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Graph{
    public:
    map<T,list<int>> l;
    
    void addEdge(int x,int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void bfs(T src){
        map<T,int> dist;
        queue<T> q;

        for(auto node_pair:l){
            dist[node_pair.first]=INT_MAX;
        }
        q.push(src);
        dist[src]=0;

        while(!q.empty()){
            T node=q.front();
            q.pop();
            for(auto nbr:l[node]){
                if(dist[nbr]==INT_MAX){
                    q.push(nbr);
                    dist[nbr]=dist[node]+1;
                }
            }
        } 
        for(auto node_pair:l){
            cout<<"Node "<<node_pair.first<<" distance from src "<<src<<" is "<<dist[node_pair.first]<<endl;
        }
    }
};


int main(){
    Graph<int> g;
    g.addEdge(0,1);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.bfs(0);
    return 0;
}