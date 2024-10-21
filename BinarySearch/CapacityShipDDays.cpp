#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

int check(int wt, vector<int>& arr) {
	int n = arr.size();
	int days = 1, currWt = 0;
	for (int i = 0; i < n; i++) {
		if (currWt + arr[i] > wt) {
			days += 1;
			currWt = arr[i];
		}
		else currWt += arr[i];
	}
	return days;
}

int shipWithinDays(vector<int>& weights, int days) {
	int n = weights.size();
	int low = *max_element(weights.begin(), weights.end());
	int high = accumulate(weights.begin(), weights.end(), 0);

	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (check(mid, weights) <= days) high = mid - 1;
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