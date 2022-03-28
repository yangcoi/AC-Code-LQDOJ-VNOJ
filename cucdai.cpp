#include<bits/stdc++.h>
using namespace std;

long long n, ans, a[1000006];
int main()
{
	freopen("CUCDAI.INP", "r", stdin);
	freopen("CUCDAI.OUT", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; ++i) cin >> a[i];

	for(int i = 2; i < n; ++i)
	{
		if( a[i] > a[i-1] && a[i] > a[i+1]) ++ans;
	}
	cout << ans;
	return 0;
}