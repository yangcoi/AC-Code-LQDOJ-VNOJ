#include <bits/stdc++.h>
using namespace std;
int n, arr[100005], f[100005];
int main()
{
    freopen("reward.inp", "r", stdin);
    freopen("reward.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    f[1] = arr[1];
    f[2] = f[1] + arr[2];
    if (n <= 2)
        cout << f[n];
    else
    {
        for (int i = 3; i <= n; i++)
            f[i] = max(f[i - 2], f[i - 3] + arr[i - 1]) + arr[i];
        cout << max(*max_element(f + 1, f + n + 1), 0);
    }
}