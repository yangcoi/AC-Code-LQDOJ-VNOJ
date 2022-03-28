//https://oj.vnoi.info/problem/atcoder_dp_d
#include <bits/stdc++.h>
using namespace std;
int n, w,a[10001],b[10001];
long long dp[1001][100001];
int main()
{
    cin>>n>>w;
    for (int i=1;i<=n;i++)
        cin>>a[i]>>b[i];

    memset(dp,0,sizeof(dp));

    for(int i=1;i<=n;i++)
        for(int j=1;j<=w;j++)
        {
            if (a[i]<=j)
                dp[i][j]=max(dp[i-1][j-a[i]]+b[i],dp[i-1][j]);
            else
                dp[i][j]=dp[i-1][j];
        }

    cout<<dp[n][w];
}
