#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

// O(N^2)
void SelectionSort(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		int minIndex = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[minIndex]) minIndex = j;
		}
		swap(arr[minIndex], arr[i]);
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	return 0;
}