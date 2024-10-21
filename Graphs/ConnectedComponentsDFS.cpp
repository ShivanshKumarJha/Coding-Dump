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

    void dfs_helper(T src,map<T,bool> &visited){
        cout<<src<<" ";
        visited[src]=true;

        for(auto nbr:l[src]){
            if(!visited[nbr]){
                dfs_helper(nbr,visited);
            }
        }
        return;
    }

    void dfs(){
        map<T,bool> visited;
        for(auto node:l){
            visited[node.first]=false;
        }
        int count=1;
        for(auto node:l){
            if(!visited[node.first]){
                cout<<"Component "<<count<<" -->";
                dfs_helper(node.first,visited);
                count++;
                cout<<endl;
            }
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

    g.addEdge(5,6);
    g.addEdge(6,7);

    g.addEdge(8,8);
    g.dfs();
    return 0;
}