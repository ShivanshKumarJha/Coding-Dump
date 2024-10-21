#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

int findRoot(int n) {
	int ans = 1;
	int low = 1, high = n;

	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (mid * mid <= n) {
			ans = mid;
			low = mid + 1 ;
		}
		else high  = mid - 1;
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