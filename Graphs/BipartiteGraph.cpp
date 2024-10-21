#include<bits/stdc++.h>
using namespace std;

bool dfs_helper(vector<int> graph[], int src, int parent, int *visited, int color) {
    visited[src] = color;
    for (auto nbr : graph[src]) {
        if (visited[nbr] == 0) {
            bool smallOutput = dfs_helper(graph, nbr, src, visited, 3 - color);
            if (smallOutput == false) {return false;}
        }
        else if (nbr != parent and color == visited[nbr]) {
            return false;
        }
    }
    return true;
}

bool dfs(vector<int> graph[], int v) {
    int visited[v] = {0};              //0-not visited 1-visited and color 1  2-visited and color 2
    bool ans = dfs_helper(graph, 0, -1, visited, 1);

    //Colors
    for (int i = 0; i < v; i++) {
        cout << i << " -Color" << visited[i] << endl;
    }
    return ans;
}

//Using BFS
bool isBipartite(vector<vector<int>>& graph) {
    int v = graph.size();
    vector<int> color(v);
    queue<int> q;

    for (int i = 0; i < v; i++) {
        if (color[i]) {continue;}
        color[i] = 1;

        q.push(i);
        while (!q.empty()) {
            int curr = q.front();
            q.pop();
            for (int nbr : graph[curr]) {
                if (!color[nbr]) {color[nbr] = 3 - color[curr]; q.push(nbr);}
                else if (color[nbr] == color[curr]) {return false;}
            }
        }
    }
    return true;
}

int main() {
    int v, e;
    cin >> v >> e;
    vector<int> graph[v];
    while (e--) {
        int x, y;
        cin >> x >> y;

        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    //BFS or DFS by coloring the nodes at each step (current node has color 1,neighbours should have the color 2)
    if (dfs(graph, v)) {
        cout << "Yes it's Bipartite Graph" << endl;
    }
    else {
        cout << "No it's not a Bipartite Graph" << endl;
    }
    return 0;
}