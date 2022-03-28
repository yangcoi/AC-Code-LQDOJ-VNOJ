#include<bits/stdc++.h>
using namespace std;

long long n, k, a[100005];
int main()
{
    freopen("BINHCHON.INP", "r", stdin);
    freopen("BINHCHON.OUT", "w", stdout);
    cin >> n >> k;
    for(int i = 1; i <= n; ++i) cin >> a[i];

    sort(a+1, a+n+1);
    a[n+1] = INT_MIN;
    int dem = 1, ans = INT_MIN;
    for(int i = 2; i <= n+1; ++i)
    {
        if(a[i] == a[i-1]) ++dem, ans = max(ans, dem);
        else dem = 1;
    }
    cout << ans;
    return 0;
}
