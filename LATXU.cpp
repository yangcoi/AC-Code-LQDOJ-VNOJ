#include <bits/stdc++.h>
using namespace std;
int n, arr[1000006];
map<int, int> mp;
int main()
{
    freopen("latxu.inp", "r", stdin);
    freopen("latxu.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    for (int i = n; i >= 1; i--)
    {
        if (i % 2 != 0)
            continue;
        else
        {
            if (arr[i] != arr[i - 1])
                for (int j = i - 1; j >= 1; j--)
                {
                    if (arr[j] != arr[i])
                        arr[j] = arr[i];
                    else
                        break;
                }
        }
    }
    for (int i = 1; i <= n; i++)
        if (arr[i] = 0)
            mp[arr[i]]++;
    cout << arr[0];
}