#include<bits/stdc++.h>
using namespace std;
long long n,m,q,v[2001],dp[2003][30002],w[2001];

int main()
{
    freopen("FARMER.INP", "r", stdin);
    freopen("FARMER.OUT", "w", stdout);
    cin>>q>>n>>m;
    int t;
    for (int i=1;i<=n;i++)
    {
        cin>>t;
        v[i]=w[i]=t;
    }

    for (int i=1;i<=m;i++)
    {
        cin>>t;
        v[i+n]=t-1;
        w[i+n]=t;
    }
    n+=m;
    memset(dp,0,sizeof(dp));
    for (int i=1;i<=n;i++)
        for (int j=1;j<=q;j++)
        {
            if (w[i]<=j)
                dp[i][j]=max(dp[i-1][j-w[i]]+v[i],dp[i-1][j]);
            else
                dp[i][j]=dp[i-1][j];
        }
    cout<<dp[n][q];
    return 0;
}
