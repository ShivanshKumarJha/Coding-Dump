#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

bool check(vector<int>& arr, int day, int m, int k) {
	int n = arr.size();
	ll cnt = 0, noOfBouqets = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] <= day) cnt++;
		else {
			noOfBouqets += ((double)cnt / (double)k);
			cnt = 0;
		}
	}
	noOfBouqets += (cnt / k);
	return (noOfBouqets >= m);
}

int minDays(vector<int>& bloomDay, ll m, ll k) {
	int n = bloomDay.size();
	if (n < m * k) return -1;

	int low = *min_element(bloomDay.begin(), bloomDay.end());
	int high = *max_element(bloomDay.begin(), bloomDay.end());

	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (check(bloomDay, mid, m, k)) high = mid - 1;
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