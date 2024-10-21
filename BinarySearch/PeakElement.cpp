#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

int peakElement(int arr[], int n) {
	// Your code here
	if (n == 1) return 0;
	if (arr[0] >= arr[1]) return 0;
	if (arr[n - 1] >= arr[n - 2]) return n - 1;
	int low = 1, high = n - 2;

	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (arr[mid] >= arr[mid + 1] && arr[mid] >= arr[mid - 1]) return mid;
		else if (arr[mid] >= arr[mid - 1]) low = mid + 1;
		else high = mid - 1;
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