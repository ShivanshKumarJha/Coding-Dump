#include<bits/stdc++.h>
using namespace std;

class Graph{
    list<int>* l;
    int V;

    public:
    Graph(int V){
        this->V=V;
        l=new list<int> [V];
    }
    void addEdge(int x,int y){
        //directed Graph
        l[x].push_back(y);
    }

    void toplogical_sort(){
        int *indegree=new int[V];
        for(int i=0;i<V;i++){
            indegree[i]=0;
        }
        //Update indegree
        for(int i=0;i<V;i++){
            for(auto y:l[i]){
                indegree[y]++;
            }
        }

        //BFS
        // 1.Step find nodes with 0 indegree
        queue<int> q;
        for(int i=0;i<V;i++){
            if(indegree[i]==0){q.push(i);}
        }
        while(!q.empty()){
            int node=q.front();
            cout<<node<<" ";
            q.pop();
            for(auto nbr:l[node]){
                indegree[nbr]--;
                if(indegree[nbr]==0){
                    q.push(nbr);    
                }
            }
        }
    }
};

int main(){
  
    return 0;
}