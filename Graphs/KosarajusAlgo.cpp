#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int> graph[],int node,bool visited[],vector<int> &stack){
    visited[node]=true;
    for(int nbr:graph[node]){
        if(!visited[nbr]){dfs(graph,nbr,visited,stack);}
    }
    stack.push_back(node);
}

void dfs2(vector<int> graph[],int node,bool visited[]){
    visited[node]=true;
    cout<<node<<" ";
    for(int nbr:graph[node]){
        if(!visited[nbr]){dfs2(graph,nbr,visited);}
    }
}

void solve(vector<int> graph[],vector<int> rev_graph[],int N){
    bool visited[N];
    memset(visited,false,N);
    vector<int> stack;

    //Step1 need to store the vertices according to the dfs finish time
    for(int i=0;i<N;i++){
        if(!visited[i]) dfs(graph,i,visited,stack);
    }

    //Step2 Reverse the graph-Already done

    //Step3 Do DFS in reverse iteration of the stack on the rev_graph
    memset(visited,false,N);
    char component_name='A';
    for(int i=stack.size()-1;i>=0;i--){
        int node=stack[i];
        if(!visited[node]){
            cout<<"Component "<<component_name<<"-->";
            dfs2(rev_graph,node,visited);
            cout<<endl;
            component_name++;
        }
    }
}

int main(){
    int N;
    cin>>N;

    vector<int> graph[N]; 
    vector<int> rev_graph[N];

    int m;
    cin>>m;

    while(m--){
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        rev_graph[y].push_back(x);
    }
    solve(graph,rev_graph,N);
    return 0;
}