#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[5005][5005];
int main()
{
    freopen("STRING.inp","r",stdin);
    freopen("STRING.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s1, s2;
    cin>>s1;
    cin>>s2;
    s1=" "+s1;
    s2=" "+s2;
    for (int i=0;i<s1.length();i++)
        dp[i][0]=i;
    for (int j=0;j<s2.length();j++)
        dp[0][j]=j;
    for (int i=1;i<s1.length();i++)
    {
        for (int j=1;j<s2.length();j++)
        {
            if (s1[i]==s2[j]) dp[i][j]=dp[i-1][j-1];
            else dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
            //cout<<dp[i][j]<<" ";
        }
        //cout<<endl;
    }
    cout<<dp[s1.length()-1][s2.length()-1];
    return 0;
}
