#include <bits/stdc++.h>
using namespace std;
int a[101][101],n,ans, f[101][101];

int main()
{
    freopen("triangle.inp","r",stdin);
    freopen("triangle.out","w",stdout);
    cin>>n;
    for (int i=1;i<=n;++i)
        for (int j=1;j<=i;++j)
            cin>>a[i][j];
    f[1][1]=a[1][1];
    for (int i=2;i<=n;++i)
        for (int j=1;j<=i;++j)
            f[i][j]=max(f[i-1][j-1],f[i-1][j])+a[i][j];
    ans=INT_MIN;
    for (int j=1;j<=n;++j)
        ans=max(ans,f[n][j]);
    cout<<ans;
}
