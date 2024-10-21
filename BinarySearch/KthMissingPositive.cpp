#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

int findKthPositive(vector<int>& arr, int k) {
	int n = arr.size();
	int low = 0, high = n - 1;

	while (low <= high) {
		int mid = low + (high - low) / 2;
		int missing = arr[mid] - (mid + 1);
		if (missing < k) low = mid + 1;
		else high = mid - 1;
	}

	return low + k;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	return 0;
}