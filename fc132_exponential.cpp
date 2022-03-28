//https://oj.vnoi.info/problem/fc132_exponential
#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie();
#define ll long long

const int N = 1e5;
int main() {
	fastio
	ll x;
	cin >> x;
	ll res = 1;
	for (int i = 2;i<=sqrt(N);i++) {
		ll tmp = i;
		for (int j = 1;j<=30;j++) {
			tmp = tmp * i;
			if (tmp <= x) res = max(res,tmp);
		}
	}
	cout << res;

	return 0;
}
