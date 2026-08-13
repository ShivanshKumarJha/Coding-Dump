#include <bits/stdc++.h>
using namespace std;

#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void ans() {
	int n, k, n1;
	cin >> n >> k >> n1;

	int req = n * n;
	int curr = k * n1 * n1;

	if (req <= curr) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main()
{
	fast();

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	clock_t z = clock();

	// int t;
	// cin >> t;

	// while (t--) {
	// 	ans();
	// }

	ans();

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << " ";

	return 0;
}