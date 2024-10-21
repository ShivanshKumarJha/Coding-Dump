#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

int search(vector<int>& arr, int target) {
	int n = arr.size();
	int low = 0, high = n - 1;

	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (arr[mid] == target)
			return mid;

		// If duplicates occur
		if (arr[low] == arr[mid] && arr[mid] == arr[high]) {left++; right--; continue;}

		// Check for the left sorted array
		if (arr[low] <= arr[mid]) {
			if (arr[low] <= target && target <= arr[mid])
				high = mid - 1;
			else
				low = mid + 1;
		}
		// Check for the right sorted array
		else {
			if (arr[mid] <= target && target <= arr[high])
				low = mid + 1;
			else
				high = mid - 1;
		}
	}
	return -1;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	return 0;
}