#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MOD = 1e9 + 7;

// Function to compute the total number of permutations achieving minimum effort
long long count_min_permutations(const vector<int>& H, int N) {
	vector<long long> dp(N + 1, 0);
	dp[0] = 1; // Base case: 1 way to solve 0 problems

	// Iterate through all problems
	for (int i = 1; i <= N; ++i) {
		// Calculate the total effort to solve problems [1...i]
		long long total_effort = 0;
		for (int j = 1; j <= i; ++j) {
			total_effort += H[j - 1]; // Add the toughness of problem j
			total_effort %= MOD;
		}
		// Calculate the count of permutations for solving problems [1...i]
		for (int j = 1; j <= i; ++j) {
			dp[i] += dp[j - 1] * (total_effort % MOD); // Add the count of permutations for solving problems [1...j-1]
			dp[i] %= MOD;
			if (j < i) {
				total_effort -= H[j - 1]; // Exclude the toughness of problem j if j < i
				if (total_effort < 0) {
					total_effort += MOD; // Adjust for negative value
				}
			}
		}
	}

	return dp[N];
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int N;
	cin >> N;
	vector<int> H(N);
	for (int i = 0; i < N; ++i) {
		cin >> H[i];
	}

	cout << count_min_permutations(H, N) << endl;

	return 0;
}
