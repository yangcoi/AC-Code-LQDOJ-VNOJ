#include <bits/stdc++.h>
using namespace std;

int m, n, arr[1003][1003], f[1003][1003], ans;

int main()
{
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> arr[i][j];
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            if (arr[i][j] == 1)
                f[i][j] = min(f[i - 1][j - 1], min(f[i - 1][j], f[i][j - 1])) + 1;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            ans = max(f[i][j], ans);
    cout << ans << endl;
}