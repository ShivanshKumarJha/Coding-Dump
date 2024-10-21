    #include<bits/stdc++.h>
    using namespace std;

    template <typename T>
    class Graph{
        public:
        map<T,list<int>> l;

        void addEdge(T x,T y){
            l[x].push_back(y);
            l[y].push_back(x);
        }

        void dfs_helper(T src,map<T,bool> &visited,long long int &c){
            visited[src]=true;

            for(auto nbr:l[src]){
                if(!visited[nbr]){
                    c=c+1;
                    dfs_helper(nbr,visited,c);
                }
            }
            return;
        }

        long long int dfs(){
            map<T,bool> visited;
            for(auto node:l){
                visited[node.first]=false;
            }
            int res=0;
            for(auto node:l){
                if(!visited[node.first]){
                    long long int k=1;
                    dfs_helper(node.first,visited,k);
                    res+=(k==1)?0:((k)*(k-1)/2);
                }
            }
            return res;
        }
    };

    int main(){
        Graph<int> g;
        long long int n,p;
        cin>>n>>p;
        for(int i=0;i<p;i++){
            int x,y;
            cin>>x>>y;
            g.addEdge(x,y);
        }
        long long int result=((n*(n-1))/2)-g.dfs();
        cout<<result<<endl;
        return 0;
    }