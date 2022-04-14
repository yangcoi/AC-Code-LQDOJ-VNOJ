/*
	link problem: https://lqdoj.edu.vn/problem/primecount

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a/gcd(a,b))*b

const ll MOD = 1000000007;
const ll nMax = 4e4 + 5;
bool chk[nMax];
vector<ll> pri;
void sieve() {
	memset(chk, 0, sizeof(chk));
	for (ll i = 2; i < nMax; ++i) {
		if (!chk[i]) {
			for (ll j = i * i; j < nMax; j += i) chk[j] = 1;
		}
	}
	for (ll i = 2; i < nMax; ++i) {
		if (!chk[i]) pri.pb(i);
	}
}

void solve() {
	ll l, r, cnt = 0;
	cin >> l >> r;
	bool a[r - l + 1];
	memset(a, 0, sizeof(a));
	for (auto x : pri) {
		if (x * x > r) break;
		ll li = max(2LL, (l - 1 + x) / x);
		ll ri = r / x;
		while (li <= ri) {
			a[li * x - l] = 1;
			li++;
		}
		//cout << x  << '\n';
	}
	for (ll i = 0; i <= r - l; ++i) {
		if (!a[i] && i + l > 1) cnt++;
	}
	cout << cnt;
}


int main() {
	fast_cin();
	ll t = 1;
	cin >> t;
	sieve();
	while (t) {
		solve();
		cout << '\n';
		--t;
	}
	return 0;
}