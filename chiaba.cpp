#include<bits/stdc++.h>
using namespace std;

long long n, a[1000006], f[1000006], g[1000006], dem[10000006];
int main()
{
    freopen("CHIABA.inp", "r", stdin);
    freopen("CHIABA.out", "w", stdout);

    cin >> n;

    for(long long i = 1; i <= n; ++i) cin >> a[i], f[i] = f[i-1] + a[i];
    if(f[n]%3 != 0)
    {
        cout << 0;
        return 0;
    }
    long long t = f[n]/3;
    for(long long i = n; i >= 1; --i) g[i] = g[i+1] + a[i];
    for(long long i = n; i >= 3; --i)
    {
        if(g[i] == t) dem[i] = dem[i+1] + 1;
        else dem[i] = dem[i+1];
    }
    long long ans = 0;
    for(int i = 1; i <= n-2; ++i)
    {
        if(f[i] == t) ans += dem[i+2];
    }
    cout << ans;
    return 0;
}