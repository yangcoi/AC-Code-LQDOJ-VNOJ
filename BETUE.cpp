#include <bits/stdc++.h>
using namespace std;

long long i, n, k, a[300007],vtd,vtc,mid,res;
int kt(int x)
{
    int d=0;
    for (int i=1;i<=k;++i)
    {
        if (a[i]<=x)
            ++d;
        if (a[i]>x)
        {
            if (a[i]%x==0)
                d += a[i]/x;
            else
                d += a[i]/x+1;
        }
    }
    if (d <= n)
        return 1;
    else
        return 0;
}
int main()
{
    freopen("BETUE.INP", "r", stdin);
    freopen("BETUE.OUT", "w", stdout);
    cin>> n>> k;
    for (int i=1;i<=k;i++)
        cin>>a[i] ;
    sort(a+1,a+k+1);
    res = a[k];
    vtd=1;
    vtc= a[k];
    while (vtd <= vtc)
    {
        mid = (vtd+vtc) /2;
        if (kt(mid)==1)
        {
            res = mid;
            vtc = mid-1;
        }
        else
            vtd = mid+1;
    }
    cout << res;
}
