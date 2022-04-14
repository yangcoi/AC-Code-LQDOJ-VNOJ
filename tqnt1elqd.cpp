//https://lqdoj.edu.vn/problem/tqnt1e
#include<bits/stdc++.h>
using namespace std;

long long n;
const long long mod = 1000000007;

long long lt(long long x)
{
    long long s=1;
    for(int i=1;i<=x;++i)
        s=(s*2)%mod;
    return s;
}

int main()
{
    cin >> n;
    long long dau = lt(n-1);
    long long cuoi = ( dau*2 - 1);
    long long slsh = ( (cuoi - dau)+ 1 );
    long long ans = ( ( (dau+cuoi)*slsh )/2 );
    cout << ans%mod;
}