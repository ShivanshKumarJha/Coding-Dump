#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

bool check(vector<int>& nums, int divisor, int threshold) {
	int n = nums.size();
	int cnt = 0;

	for (int i = 0; i < n; i++) {
		cnt += ceil(((double)nums[i]) / ((double)divisor));
	}

	return (cnt <= threshold);
}

int smallestDivisor(vector<int>& nums, int threshold) {
	int n = nums.size();
	int low = 1, high = *max_element(nums.begin(), nums.end());
	int ans = INT_MAX;

	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (check(nums, mid, threshold)) {
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