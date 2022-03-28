#include<bits/stdc++.h>
using namespace std;
int n,k,dp[1003][1002],s[10001],vc=INT_MAX,a[1003][1002];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("FLOWER.INP", "r", stdin);
    freopen("FLOWER.OUT", "w", stdout);
    cin>>k>>n;
    for (int i=1;i<=k;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];

    for (int i=0;i<=n;i++)
        dp[0][i]=0;

    for (int i=1;i<=k;i++)
        for(int j=0;j<=n;j++)
            dp[i][j]=-10000000000;

    s[0]=0;
    for(int i=1;i<=k;i++)
        s[i]=s[i-1]+a[i][i];

     for (int i=1;i<=k;i++)
    {
        for(int j=i;j<=n;j++)
        {
            if( i==j)
                dp[i][j]=s[i];
            else if(i<j)
                dp[i][j]=max(dp[i-1][j-1]+a[i][j],dp[i][j-1]);
        }
    }
    cout<<dp[k][n];
    return 0;
}

