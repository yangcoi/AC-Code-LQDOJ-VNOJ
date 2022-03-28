#include <bits/stdc++.h>
using namespace std;
int n, m, f[202][202],a[202];
int main()
{
    freopen("nemchua.inp","r",stdin);
    freopen("nemchua.out","w",stdout);
    cin>>n>>m;
    for (int i=1;i<=n;++i)cin>>a[i];
    sort(a+1,a+n+1);
    for (int i=1;i<=n;++i)f[i][1]=a[i]-a[1];

    for (int i=2; i<=n;++i)
        for (int j=2;j<=m;++j)
        {
            f[i][j]=f[i][j-1];
            for (int t=1; t<=i;++t) f[i][j]=min(f[i][j],f[i-t][j-1]+a[i]-a[i-(t-1)]);
        }
    cout<<f[n][m];
}
//dpt: n*m*n=200*200*200=8000000	for (t=1; t<=i;++t) f[i][j]=min(f[i][j],f[i-t][j-1]+a[i]-a[i-(t-1)];
