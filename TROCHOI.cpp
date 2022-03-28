#include<bits/stdc++.h>
using namespace std;

long long m, n, a[100005];
int main()
{
    freopen("TROCHOI.INP", "r", stdin);
    freopen("TROCHOI.OUT", "w", stdout);
    cin >> m >> n;
    for(int i = 1; i <= m*n; ++i) cin >> a[i];
    sort(a+1, a+m*n+1);
    long long t = 1, y = 0;
    for(int i = 1; i <= m*n; ++i)
    {
        if(t%2 != 0) cout << a[i] << " ", y = 0;
        else if(t%2 == 0) cout << a[n*t-y] << " ", ++y;
        if(i%n == 0) cout << "\n", ++t;
    }
    return 0;
}
