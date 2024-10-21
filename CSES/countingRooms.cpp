#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> dir = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

void bfs(int row, int col, vector<vector<char>> &graph, vector<vector<int>> &vis, int n, int m)
{
    vis[row][col] = 1;
    queue<pair<int, int>> q;
    q.push({row, col});

    while (!q.empty())
    {
        auto curr = q.front();
        q.pop();
        int r = curr.first;
        int c = curr.second;
        for (auto nbr : dir)
        {
            int nRow = r + nbr[0];
            int nCol = c + nbr[1];
            if (nRow >= 0 && nCol >= 0 && nRow < n && nCol < m && graph[nRow][nCol] == '.' && !vis[nRow][nCol])
            {
                q.push({nRow, nCol});
                vis[nRow][nCol] = 1;
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> graph(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> graph[i][j];
        }
    }

    int cnt = 0;
    vector<vector<int>> vis(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && graph[i][j] == '.')
            {
                bfs(i, j, graph, vis, n, m);
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}