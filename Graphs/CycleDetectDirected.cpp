#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int>* l;

    public:
    Graph(int V){
        this->V=V;
        l=new list<int>[V];
    }

    void addEdge(int x,int y,bool directed=true){
        l[x].push_back(y);
        if(!directed){
            l[y].push_back(x);
        }
    }

    bool cycle_helper(int node,bool* visited,bool* stack){
        //Visit a Node
        visited[node]=true;
        stack[node]=true;

        for(int nbr:l[node]){
            //Two cases
            if(stack[nbr]){return true;}
            else if(!visited[nbr]){
                bool smallOutput=cycle_helper(nbr,visited,stack);
                if(smallOutput) return true;
            }
        }

        //Leave a node
        stack[node]=false;
        return false;
    }

    bool contains_Cycle(){
        //Check for cycle in the directed graph
        bool* visited=new bool[V];
        bool* stack=new bool[V];

        for(int i=0;i<V;i++){
           visited[i]=false;
           stack[i]=false; 
        }
        
        return cycle_helper(0,visited,stack);
    }
};

int main(){
    Graph g(7);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,5);
    g.addEdge(5,6);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,2);
    g.addEdge(4,5);
    cout<<boolalpha<<g.contains_Cycle()<<endl;
    return 0;
}