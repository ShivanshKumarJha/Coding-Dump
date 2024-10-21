#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

long f(int arr[], long mid, int m, int n) {
	long pages = 0;
	long student = 1;

	for (int i = 0; i < n; i++) {
		if (pages + arr[i] <= mid) pages += arr[i];
		else {
			student++;
			pages = arr[i];
		}
	}
	return student;
}

long minTime(int arr[], int n, int M) {
	//code here
	long sum = 0;
	long maxi = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
		maxi = max(static_cast<long>(arr[i]), (maxi));
	}

	long low = maxi;
	long high = sum;

	while (low <= high) {
		long mid = low + (high - low) / 2;
		long noOfStudent = f(arr, mid, M, n);

		if ((int) noOfStudent > M) low = mid + 1;
		else high = mid - 1;
	}
	return low;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	return 0;
}