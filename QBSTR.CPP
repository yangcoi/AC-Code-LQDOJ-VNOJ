#include<bits/stdc++.h>
using namespace std;

long long n,m,dp[1003][1003];
string x,y;
int main()
{
    freopen("QBSTR.INP", "r", stdin);
    freopen("QBSTR.OUT", "w", stdout);
    getline(cin,x);
    getline(cin,y);
    n=x.length();
    m=y.length();
    x= " " + x;
    y= " " + y;
    for(int i=0;i<=n;i++)
        dp[i][0]=1;

    for(int i=0;i<=m;i++)
        dp[0][i]=1;

    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(x[i]==y[j])
                dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]=max(dp[i-1][j], dp[i][j-1]);

    cout << dp[n][m]-1;
    return 0;
}
