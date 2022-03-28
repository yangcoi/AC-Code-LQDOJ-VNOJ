#include<bits/stdc++.h>
using namespace std;

long long n, ans, a[1000006], b[1000006], c[1000006];
int main()
{
    freopen("bobaso.inp", "r", stdin);
    freopen("bobaso.out", "w", stdout);
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];

    for(int i = 3; i <= n; ++i) c[i] = 3*a[i];
    for(int i = n - 1; i >= 3; --i) c[i] = max(c[i], c[i+1]);

    for(int i = 2; i <= n-1; ++i) b[i] = 2*a[i] + c[i+1];

    for(int i = n-2; i >= 2; --i) b[i] = max(b[i], b[i+1]);

    for(int i = 1; i <= n-2; ++i) ans = max(ans, a[i]+b[i+1]);
    cout << ans;
    return 0;
}

