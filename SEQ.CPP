#include<bits/stdc++.h>
using namespace std;
long long n,s,a[10001];
bool dp[10000003];

int main()
{
    freopen("SEQ.INP", "r", stdin);
    freopen("SEQ.OUT", "w", stdout);
    cin>>n>>s;
    for (int i=1;i<=n;i++)
        cin>>a[i];
    memset(dp,false,sizeof(dp));
    dp[0]=true;
    for (int i=1;i<=n;i++)
        for (int j=s;j>=a[i];j--)
        {
            if(dp[j]==false && dp[j-a[i]]==true)
                dp[j]=true;
        }
    if (dp[s]==true)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
