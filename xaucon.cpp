#include<bits/stdc++.h>
using namespace std;

string s;
long long k, ans, n, f[1000006];
int main()
{
    freopen("xaucon.inp", "r", stdin);
    freopen("xaucon.out", "w", stdout);
    cin >> k;
    cin >> s;
    n = s.length();
    s = " " + s;
    for(int i = 1; i <= n; ++i)
    {
        if(s[i] == '1') f[i] = f[i-1]+1;
        else f[i] = f[i-1];
    }

    for(int i = 0; i < n; ++i)
    {
        int dau = lower_bound(f+i+1, f+n+1, k + f[i]) - f;
        if(dau != n+1)
        {
            int cuoi = upper_bound(f+i+1, f+n+1, k + f[i]) - f - 1;
            ans += cuoi - dau + 1;
        }
    }
    cout << ans;
    return 0;
}

