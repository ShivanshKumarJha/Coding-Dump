#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

int check(int arr[], int n , int pages) {
	int stu = 1, cntPages = 0;
	for (int i = 0; i < n; i++) {
		if (cntPages + arr[i] <= pages) cntPages += arr[i];
		else {
			stu++;
			cntPages = arr[i];
		}
	}
	return stu;
}

int findPages(int arr[], int n, int m) {
	//code here
	if (m > n) return -1;
	int sum = 0, maxi = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
		maxi = max(maxi, arr[i]);
	}

	int low = maxi, high = sum;
	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (check(arr, n, mid) <= m) high = mid - 1;
		else low = mid + 1;
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