#include <bits/stdc++.h>
using namespace std;

#define mod                     1e9 + 7
#define ll                      long long int
#define F                       first
#define S                       second
#define pb                      push_back
#define si                      set<int>
#define vi                      vector<int>
#define pii                     pair<int,int>
#define vpi                     vector<pii>
#define vpp                     vector<pair<int,pii>>
#define mii                     map<int,int>
#define mpi                     map<pii,int>
#define spi                     set<pii>
#define endl                    "\n"
#define sz(x)                   ((int) x.size())
#define all(p)                  p.begin(),p.end()
#define que_max                 priority_queue<int>
#define que_min                 priority_queue<int,vi,greater<int>>
#define bug(...)                __f(#__VA_ARGS__,__VA_ARGS__)
#define rep(i,a,n)              for(ll  i = (a); i <= (n); ++i)
#define repI(i,a,n)             for(int i = (a); i <= (n); ++i)
#define repD(i,a,n)             for(ll  i = (a); i >= (n); --i)
#define repDI(i,a,n)            for(int i = (a); i >= (n); --i)
#define print(a)                for(auto x:a) cout<<x<<" "; cout<<endl
#define print1(a)               for(auto x:a) cout<<x.F<<" "<<x.S<<endl
#define print2(a,x,y)           for(int i=x;i<y;i++) cout<<a[i]<<" "; cout<<endl
#define fast()                  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

inline ll power(ll a, ll b) {
	int x = 1;
	while (b) {
		if (b & 1) x *= a;
		a *= a;
		b >>= 1;
	}
	return x;
}


template <typename Arg1>
void __f (const char* name, Arg1&& arg1) {cout << name << " : " << arg1 << endl;}
template <typename Arg1, typename...Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
	const char* comma = strchr (names + 1, ',');
	cout.write(names, comma - names) << " : " << arg1 << " | "; __f(comma + 1, args...);
}

void solve() {
	ll a, b, c, d;
	cin >> a >> b >> c >> d;
	int cnt = 0;

	if ((a > c && b >= d) || (a >= c && b > d)) cnt += 2;
	if ((a > d && b >= c) || (a >= d && b > c)) cnt += 2;
	cout << cnt << "\n";
}

int main()
{
	fast();

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	clock_t z = clock();

	ll t;
	cin >> t;
	while (t--) {
		solve();
	}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << " ";

	return 0;
}