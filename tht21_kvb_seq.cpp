//https://oj.vnoi.info/problem/tht21_kvb_seq
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e5 + 5;

map<int, ll> mp, dx;
ll a[N], pref[N];
int n;

void sus_orz() 
{
    cin >> n;
    ll res = -1e16;
    
    for (int i = 1; i <= n; i++) 
    {
        cin >> a[i];
        pref[i] = pref[i - 1] + a[i];
        if (dx[a[i]] == 0) 
        {
            mp[a[i]] = pref[i - 1];
            dx[a[i]] = 1;
        }
        else 
        {
            res = max(res, pref[i] - mp[a[i]]);
            mp[a[i]] = min(mp[a[i]], pref[i - 1]);
        }
    }

    cout << res;
}

main() 
{
    int tc = 1;
    while(tc--)
        sus_orz();
}