#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

void printCeilingRight(int arr[], int n) {
	set<int> s;
	int res[n];

	for (int i = n - 1; i >= 0; i--) {
		auto it = s.lower_bound(arr[i]);
		if (it == s.end()) res[i] = -1;
		else res[i] = *it;
		s.insert(arr[i]);
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	return 0;
}