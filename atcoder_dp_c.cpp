//https://oj.vnoi.info/problem/atcoder_dp_c
#include<bits/stdc++.h>
using namespace std;

long long n, ans, a[100004][4], dp[100004][4];
int main()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= 3; ++j) cin >> a[i][j];
    }

    for(int i = 1; i <= 3; ++i) dp[1][i] = a[1][i];

    for(int i = 2; i <= n; ++i)
    {
        for(int j = 1; j <= 3; ++j)
        {
            if(j == 1) dp[i][j] = a[i][j] + max(dp[i-1][j+1], dp[i-1][j+2]);
            else if(j == 2) dp[i][j] = a[i][j]+ max(dp[i-1][j-1], dp[i-1][j+1]);
            else dp[i][j] = a[i][j]+ max(dp[i-1][j-1], dp[i-1][j-2]);
        }
    }
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= 3; ++j) ans = max(ans, dp[i][j]);
    }
    cout << ans;
    return 0;
}