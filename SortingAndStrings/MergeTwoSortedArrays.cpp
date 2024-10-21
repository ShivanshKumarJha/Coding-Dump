#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

void merge(int a[], int b[], int m, int n) {
	int res[m + n];
	int i = 0, j = 0, k = 0;

	while (i < m && j < n) {
		if (a[i] <= b[j]) res[k++] = a[i++];
		else res[k++] = b[j++];
	}

	while (i < m) res[k++] = a[i++];
	while (j < n) res[k++] = b[j++];
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	return 0;
}