#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

ll func(vector<int> arr, int hourly) {
	ll totalHours = 0LL;
	for (int i = 0; i < n; i++) {
		totalHours += ceil(((double)arr[i]) / ((double)hourly));
	}
	return totalHours;
}

int KokoEatingBananas(vector<int> arr, int h) {
	int low = 1;
	int high = *max_element(arr.begin(), arr.end());
	int ans = INT_MAX;

	while (low <= high) {
		int mid = low + (high - low) / 2;
		ll totalHours = func(arr, mid);
		if (totalHours <= h) {
			ans = mid;
			high = mid - 1;
		}
		else low = mid + 1;
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