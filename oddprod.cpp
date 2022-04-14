/*
	link problem: https://lqdoj.edu.vn/problem/oddprod
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


const ll MOD = 1000000007;
const ll nMax = 1e6 + 1;

void solve() {
	int n, res = 0;
	cin >> n;
	vector<int> a(n + 1), pref(n + 1, 0);
	vector<int> chk(n + 1, 0);
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		chk[i] = chk[i - 1] + (a[i] % 2 == 0);
		pref[i] = pref[i - 1] + (a[i] < 0);
		if (pref[i] % 2 == 0 && chk[i]) {
			res = max(res, i);
		}
	}
	int i = 2;
	while (i + res - 1 <= n) {
		for (int j = i + res - 1; j <= n; ++j) {
			if ((pref[j] - pref[i - 1]) % 2 == 0 && chk[j] - chk[i - 1]) {
				res = max(res, j - i + 1);
			}
		}
		i++;
	}
	cout << res;

}


int main() {
	fast_cin();
	ll t = 1;
	//cin >> t;
	while (t) {
		solve();
		cout << '\n';
		--t;
	}
	return 0;
}
