#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

// Minimum index for which arr[index] >= k
int lowerBound(vector<int>& arr, int k) {
	int n = arr.size();
	int low = 0, high = n - 1;
	int ans = n;

	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (arr[mid] >= k) {
			ans = mid;
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}

	return ans;
}

// Minimum index for which arr[index] > k
int upperBound(vector<int>& arr, int k) {
	int n = arr.size();
	int low = 0, high = n - 1;
	int ans = n;

	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (arr[mid] > k) {
			ans = mid;
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}

	return ans;
}

pair<int, int> firstLast(vector<int>& arr, int x) {
	int n = arr.size();
	int fIndex = lowerBound(arr, x);

	if (fIndex == n || arr[fIndex] != x) return { -1, -1};
	return {fIndex, upperBound(arr, x)};
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	return 0;
}