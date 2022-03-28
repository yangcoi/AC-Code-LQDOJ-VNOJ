#include<bits/stdc++.h>
using namespace std;
int s[10003],z[10003][10003],vt=0,n,k,dp[10003][10003],b[10001],vc=INT_MAX,a[1003];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("SHOES.INP", "r", stdin);
    freopen("SHOES.OUT", "w", stdout);
    cin>>n>>k;
    for (int i=1;i<=n;i++)
        cin>>a[i];
    for(int j=1;j<=k;j++)
        cin>>b[j];
    sort(a+1,a+n+1);
    sort(b+1,b+k+1);
    for (int i=1;i<=k;i++)
        for (int j=1;j<=n;j++)
            z[i][j]=abs(a[j]-b[i]);
    for (int i=0;i<=n;i++)
        dp[0][i]=0;
    for (int i=1;i<=k;i++)
        for (int j=0;j<=n;j++)
            dp[i][j]=INT_MAX;
    s[0]=0;
    for(int i=1;i<=k;i++)
        s[i]=s[i-1]+z[i][i];
    for (int i=1;i<=k;i++)
        for (int j=0;j<=n;j++)
        {
            if(i==j)
                dp[i][j]=s[i];
            else if(i<j)
                dp[i][j]=min(dp[i-1][j-1]+z[i][j],dp[i][j-1]);
        }
    cout<<dp[k][n];
    return 0;
}

