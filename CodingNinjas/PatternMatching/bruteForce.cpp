#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

bool isMatching(string s, string p) {
	int n = s.size();
	int m = p.size();

	for (int i = 0; i <= n - m; i++) {
		bool flag = true;
		for (int j = 0; j < m; j++) {
			if (s[i + j] != p[j]) {
				flag = false; break;
			}
		}
		if (flag) return true;
	}
	return false;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s, p;
	cin >> s >> p;
	cout << isMatching(s, p) << "\n";

	return 0;
}