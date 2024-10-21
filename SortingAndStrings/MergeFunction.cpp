#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

void merge(int arr[], int low, int mid, int high) {
	int m = mid - low + 1, n = high - mid;
	int a[m], b[n];
	for (int i = 0; i < m; i++) a[i] = a[low + i];
	for (int i = 0; i < n; i++) b[i] = b[m + i];

	int i = 0, j = 0, k = 0;

	while (i < m && j < n) {
		if (a[i] <= b[j]) arr[k++] = a[i++];
		else arr[k++] = b[j++];
	}

	while (i < m) arr[k++] = a[i++];
	while (j < n) arr[k++] = b[j++];
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	return 0;
}