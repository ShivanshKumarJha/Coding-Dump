#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

void shortest_distance(vector<vector<int>>&matrix) {
	// Code here
	int n = matrix.size();
	for (int via = 0; via < n; via++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if ((matrix[i][via] != -1 && matrix[via][j] != -1) &&
				        (matrix[i][j] > matrix[i][via] + matrix[via][j] || matrix[i][j] == -1)) {
					matrix[i][j] = matrix[i][via] + matrix[via][j];
				}
			}
		}
	}
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	return 0;
}