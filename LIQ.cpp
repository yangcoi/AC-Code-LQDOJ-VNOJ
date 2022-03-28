https://oj.vnoi.info/problem/liq
#include<bits/stdc++.h>
using namespace std;
int a[10005],n,dp[10005],ans;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    dp[1] = 1;
    for (int i=2;i<=n;i++)
    {   
        dp[i]=1;
        for (int j=1;j<i;j++)
            if (a[i]>a[j]) 
                dp[i]=max(dp[i],dp[j]+1);
            
        ans=max(ans,dp[i]);
    }
    cout << ans;
}
