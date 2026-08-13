#include <bits/stdc++.h>
using namespace std;

#define mod                     1e9 + 7
#define ll                      long long int
#define F                       first
#define S                       second
#define pb                      push_back
#define si                      set<int>
#define vi                      vector<int>
#define vl						vector<ll>
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

void ans() {
	ll n;
	cin >> n;
	vl v(2 * n);

	rep(i, 0, 2 * n - 1) cin >> v[i];
	sort(all(v));

	int mid = n;
	vl res(2 * n);

	ll idx = 0;
	rep(i, 0, n - 1) {
		res[idx++] = v[i];
		res[idx++] = v[i + n];
	}

	print(res);
}

int main()
{
	fast();

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	clock_t z = clock();

	ans();

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << " ";

	return 0;
}