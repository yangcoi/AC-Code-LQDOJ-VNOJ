//https://oj.vnoi.info/problem/atcoder_dp_b
#include <iostream>
using namespace std;
const long long N = 2e5 + 5;
int dp[N], h[N], n, k;

int main(){
    cin >> n >> k;
    for (int i = 1; i <= n; i ++)
        cin >> h[i];

    dp[1] = 0; 

    for (int i = 2; i <= n; i ++)
    {
        int min_of_al_J = 1e9;
        for (int j = 1; j <= k; j ++)
            if (i - j >= 1)
                min_of_al_J = min(min_of_al_J, dp[i - j] + abs(h[i] - h[i - j]));
        dp[i] = min_of_al_J;
    }

    cout << dp[n];
    return 0;
}
