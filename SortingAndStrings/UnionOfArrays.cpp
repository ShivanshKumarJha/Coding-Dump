#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

void union(int a[], int b[], int m, int n) {
	int i = 0, j = 0;
	while (i < m && j < n) {
		if (i > 0 && a[i] == a[i - 1]) continue;
		if (j > 0 && a[j] == a[j - 1]) continue;
		if (a[i] < b[j]) cout << a[i] << " "; i++;
		else if (a[i] == b[j]) cout << a[i] << " "; i++; j++;
		else cout << b[j] << " "; j++;
	}

	while (i < m && a[i] != a[i - 1]) cout << a[i] << " "; i++;
	while (j < n && b[j] != b[j - 1]) cout << b[j] << " "; j++
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	return 0;
}