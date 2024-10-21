#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{
    unordered_map<T,list<T>> l;

    public:
    void addEdge(T x,T y){
        l[x].push_back(y);
    }

    void dfs_helper(T src,map<T,bool> &visited,list<T> &ordering){
        visited[src]=true;

        for(T nbr:l[src]){
            if(!visited[nbr]){
                dfs_helper(nbr,visited,ordering);
            }
        }

        ordering.push_front(src);
    }

    void dfs(){
        map<T,bool> visited;
        list<T> ordering;
        for(auto node:l){
            visited[node.first]=false;
        }

        for(auto p:l){
            if(!visited[p.first]){dfs_helper(p.first,visited,ordering);}
        }

        for(auto p:ordering){
            cout<<p<<" ";
        }
    }
};

int main(){
    
    Graph<string> g;
    g.addEdge("Python","DataPreprocessing");
    g.addEdge("Python","Pytorch");
    g.addEdge("Python","ML");
    g.addEdge("DataPreprocessing","ML");
    g.addEdge("Pytorch","DL");
    g.addEdge("ML","DL");
    g.addEdge("DL","FaceRecogn");
    g.addEdge("DataSet","FaceRecogn");
    g.dfs();
    return 0;
}