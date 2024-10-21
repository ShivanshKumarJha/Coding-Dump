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

    bool cycle_helper(T src,unordered_map<T,bool> &visited,int parent){
        visited[src]=true;
        for(auto nbr:l[src]){
            //go and recursively visit the nbrs 
            if(!visited[nbr]){
                if(cycle_helper(nbr,visited,src)){return true;}
            }
            //nbr is visited but nbr is not equal to the parent
            else if(visited[nbr] && nbr!=parent){
                return true;
            }
        }
        return false;
    }

    bool contains_cycle(){
        unordered_map<T,bool> visited;
        for(auto node:l){
            visited[node.first]=false;
        }
        return cycle_helper(0,visited,-1);
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
    cout<<boolalpha<<g.contains_cycle()<<endl;
    return 0;
}