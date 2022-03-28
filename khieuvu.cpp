#include <bits/stdc++.h>
using namespace std;

int i, n, k, h[100005];
long long res;
void solve()
{
    int left, right;
    sort (h+1, h+n+1);
    res = 0;
    for (int i = 1; i<=n-1; i++)
    {
        left = lower_bound(h+i+1, h+n+1, h[i]+k) - h;
        if (h[left] != h[i] + k)
            continue;
        right = upper_bound(h+1+i, h+1+n, k+h[i])-h-1;
        res += right-left+1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie (0);
    cout.tie (0);
    freopen("khieuvu.INP", "r", stdin);
    freopen("khieuvu.OUT", "w", stdout);
    cin >> n >> k;
    for (int i = 1; i<=n; i++)
        cin >> h[i];
    solve ();
    cout << res;
    return 0;
}
