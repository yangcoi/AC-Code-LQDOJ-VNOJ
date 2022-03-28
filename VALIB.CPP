#include <bits/stdc++.h>
using namespace std;
int n, w,a[1001],b[1001],dp[1001][1001];
int main()
{
    freopen("VALIB.inp","r",stdin);
    freopen("VALIB.out","w",stdout);
    cin>>n>>w;
    for (int i=1;i<=n;i++)
        cin>>a[i]>>b[i];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++)
        for(int j=1;j<=w;j++)
        {
            if (a[i]<=j)
                dp[i][j]=max(dp[i][j-a[i]]+b[i],dp[i-1][j]);
            else
                dp[i][j]=dp[i-1][j];
        }

    cout<<dp[n][w];
}
