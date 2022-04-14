//https://oj.vnoi.info/problem/nkcable
#include<bits/stdc++.h>
using namespace std;

long long n,a[30000],f[30000];
int main()
{
    cin >> n;
    for(int i=1;i<=n-1;i++) cin >> a[i];
    f[0]=0;
    f[1]=INT_MAX;
    for(int i=2;i<=n;i++)
    {
        f[i]=min(f[i-3]+a[i-2]+a[i-1],f[i-2]+a[i-1]);
    }
    cout << f[n];
    return 0;
}