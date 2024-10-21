#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

int findMin(vector<int>& arr) {
	int n = arr.size();
	int low = 0, high = n - 1, ans = INT_MAX;

	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (arr[low] <= arr[mid]) {
			ans = min(ans, arr[low]);
			low = mid + 1;
		}
		else {
			ans = min(ans, arr[mid]);
			high = mid - 1;
		}
	}
	return ans;
}

// 2nd Approach
int findMin(int arr[], int n) {
	int low = 0;
	int high = n - 1;
	int ans = INT_MAX;
	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (arr[mid] < ans) {
			ans = arr[mid];
		}
		// Left sorted then go to right
		if (arr[low] <= arr[mid] && arr[mid] > arr[high]) low = mid + 1;
		// Right sorted then go to left
		else if (arr[mid] < arr[low] && arr[mid] <= arr[high]) high = mid - 1;
		else break;
	}

	// At last compare with the leftout sorted array
	if (ans > arr[low]) ans = arr[low];
	return ans;
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	return 0;
}