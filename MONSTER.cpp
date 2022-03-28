#include <bits/stdc++.h>
using namespace std;
int n, V, h[1005], t[1003],dp[1003][10004];
int main()
{
    freopen ("monster.inp","r", stdin);
    freopen("monster.out","w",stdout);
    cin>>n>>V;
    for (int i=1;i<=n;++i)
        cin>>h[i];
    for (int i=1;i<=n;++i)
        cin>>t[i];
    int vc=INT_MIN;
    for (int i=0;i<=n+1;++i)
        for (int j=0;j<=V+1;++j)
            dp[i][j]=vc;
    if (t[1]<=V)
        dp[1][t[1]]=h[1];
    for (int i=2;i<=n;++i)
        for (int j=1;j<=V;++j)
        {
            if (dp[i-1][j]>=h[i]) 
                dp[i][j]=dp[i-1][j];
            if (j>=t[i] && dp[i-1][j-t[i]]>vc)
                dp[i][j]=max(dp[i][j],dp[i-1][j-t[i]]+h[i]);
        }
    for (int j=1;j<=V;++j)
        if (dp[n][j]>vc)
        {
            cout<<j; 
            return 0;
        }
    cout<<-1;

}
