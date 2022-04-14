//https://oj.vnoi.info/problem/atcoder_dp_f
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int S = s.size(), T = t.size();
    int dp[S + 1][T + 1];
    for (int i = 1; i <= S; i++) dp[i][0] = 0;
    for (int j = 1; j <= T; j++) dp[0][j] = 0;
    dp[0][0] = 0;
    s = ' ' + s;
    t = ' ' + t;
    for (int i = 1; i <= S; i++){
        for (int j = 1; j <= T; j++){
            if (s[i] == t[j]) dp[i][j] = dp[i - 1][j - 1] + 1;
            else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    string ans = "";
    while (S && T){
        if (s[S] == t[T]){
            ans += s[S];
            S--;
            T--;
        }
        else
            if (dp[S - 1][T] > dp[S][T - 1]) S--;
            else T--;
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
    return 0;
}
