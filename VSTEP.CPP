#include <bits/stdc++.h>
using namespace std;
int n, k,wa[100001],dp[1000001];
int main()
{
    freopen("vsteps.inp","r",stdin);
    freopen("vsteps.out","w",stdout);
    cin>>n>>k;
    for (int i=1;i<=k;i++)
    {
        int x;
        cin>>x;
        wa[x]=1;
    }
    dp[1];
    if (wa[2]==1)
        dp[2]=0;
    else
        dp[2]=1;
    for(int i=3;i<=n;i++)
        if (wa[i]==1)
            dp[i]=0;
        else
            dp[i]=(dp[i-1]+dp[i-2])%14062008;
    cout<<dp[n];
}
