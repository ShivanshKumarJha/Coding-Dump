#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

bool check(vector<int>& arr, int dist, int cows) {
	int cntCows = 1, last = arr[0];
	int n = arr.size();
	for (int i = 1; i < n; i++) {
		if (arr[i] - last >= dist) {
			cntCows++;
			last = arr[i];
		}
		if (cntCows >= cows) return true;
	}
	return false;
}

int solve(int n, int k, vector<int> &stalls) {
	sort(stalls.begin(), stalls.end());
	int maxi = *max_element(stalls.begin(), stalls.end());
	int mini = *min_element(stalls.begin(), stalls.end());

	int low = 1, high = maxi - mini;
	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (check(stalls, mid, k)) low = mid + 1;
		else high = mid - 1;
	}
	return high;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	return 0;
}