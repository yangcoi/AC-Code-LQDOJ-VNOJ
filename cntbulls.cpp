//https://oj.vnoi.info/problem/ctnbulls
#include <bits/stdc++.h>
using namespace std;

int n,k,mod= 2111992,f[100001];
int main()
{
	cin >> n >> k;
	for (int i = 1;i<=k + 1;i++)
		f[i] = (i + 1) % mod;

	for (int i = k + 2;i<=n;i++)
		f[i] = (f[i - k - 1] % mod + f[i-1] % mod) % mod;

	cout << f[n];

	return 0;
}
