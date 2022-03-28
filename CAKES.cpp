#include <bits/stdc++.h>
using namespace std;

long long i, n, s, a[300007], vtd, vtc, mid, res;

bool kt(long long x)
{
    long long res = 0;
    for (int i=1 ; i<=n ; i++)
        res += x/a[i];
    return res>=s;
}

void sol()
{
    long long ans, vtd=1, vtc= s*500;
    while (vtd <= vtc)
    {
        long long mid = ( vtd+vtc ) /2;
        if( kt(mid) )
        {
            ans = mid;
            vtc = mid - 1;
        }
        else
            vtd = mid + 1;
    }
    cout<<ans;
}

int main()
{
    freopen("CAKES.INP", "r", stdin);
    freopen("CAKES.OUT", "w", stdout);
    cin>> s>> n;
    for (int i=1;i<=n;i++)
        cin>>a[i] ;
    sol();
    return 0;
}
