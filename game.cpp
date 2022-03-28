#include <bits/stdc++.h>
using namespace std;

int n, a[701];
long long dp[701][701];
bool F[701][701];

int f(int l, int r)
{
	if (F[l][r]++)
        return dp[l][r];
	int m = 0;
	for (int i=l+1; i<=r-1; i++)
	m = max(m, ( f(l, i) + f(i, r) + a[i]*(a[l]+a[r]) ) );
	return dp[l][r] = m;
}

main() {
	freopen("game.inp", "r", stdin);
	freopen("game.out", "w", stdout);

	cin>>n;
	for (int i=1; i<=n; i++)
        cin>>a[i];
	cout << f(1, n) << endl;
}
