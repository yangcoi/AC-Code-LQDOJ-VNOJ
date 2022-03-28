#include<bits/stdc++.h>
using namespace std;

unsigned long long mod = 1000000007;
unsigned long long n, k, p, a[1000006], sum, bd, ans;
int main()
{
    freopen("TONG.INP", "r", stdin);
    freopen("TONG.OUT", "w", stdout);
    cin >> n >> k >> p;
    for(unsigned long long i = 1; i <= n; ++i) cin >> a[i], sum = sum + a[i];

    bd = (p-1)%n + 1;

    unsigned long long sll = k/n;
    ans = sum%mod * (sll%mod)%mod;
    unsigned long long kt = k%n;
    for(int i = bd; i <= bd+kt-1; ++i) ans = ( ans + a[(i-1)%n+1] )%mod;
    cout << ans;
}
