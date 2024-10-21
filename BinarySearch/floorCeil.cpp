#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

int floor(vector<int>& arr, int x) {
	int n = arr.size();
	int low = 0, high = n - 1;
	int ans = -1;

	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (arr[mid] <= x) {
			ans = arr[mid];
			low = mid + 1;
		}
		else high = mid - 1;
	}
	return ans;
}

int ceil(vector<int>& arr, int x) {
	int n = arr.size();
	int low = 0, high = n - 1;
	int ans = n;

	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (arr[mid] >= x) {
			ans = mid;
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}

	return ans;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	return 0;
}