#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

/* Points to note:
1.Make the 3d visited array that will also keeps tracks that if at location (i,j) , has it visited for upto k time removal
2.Simply bfs traversal -> it will give the shortest path
3.If at location (i,j) == 0 it will not reduce the k but if it is 1 then currK will reduce by 1 */

class Solution {
public:
	vector<pair<int, int>> dir = {{ -1, 0}, {0, 1}, {1, 0}, {0, -1}};

	int shotestPath(vector<vector<int>> mat, int n, int m, int k) {
		// code here
		vector<vector<vector<bool>>> vis(n, vector<vector<bool>>(m, vector<bool>(k + 1)));
		queue<pair<int, pair<int, pair<int, int>>>> q;
		q.push({k, {0, {0, 0}}});
		vis[0][0][k] = 1;
		int ans = 1e9;

		while (!q.empty()) {
			int currK = q.front().first;
			int currSteps = q.front().second.first;
			int currX = q.front().second.second.first;
			int currY = q.front().second.second.second;
			q.pop();

			if (currX == n - 1 && currY == m - 1) {
				return currSteps;
			}

			for (auto nbr : dir) {
				int newX = currX + nbr.first;
				int newY = currY + nbr.second;
				if (newX >= 0 && newX < n && newY >= 0 && newY < m) {
					if (mat[newX][newY] == 1 && currK > 0 && vis[newX][newY][currK - 1] == false) {
						vis[newX][newY][currK - 1] = true;
						q.push({currK - 1, {currSteps + 1, {newX, newY}}});
					}
					else if (vis[newX][newY][currK] == false && mat[newX][newY] == 0) {
						vis[newX][newY][currK] = true;
						q.push({currK, {currSteps + 1, {newX, newY}}});
					}
				}
			}
		}
		return ans == 1e9 ? -1 : ans;
	}
};

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	return 0;
}
