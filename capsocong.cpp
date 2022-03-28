#include <bits/stdc++.h>
using namespace std;
int n;
long long arr[1000006], d, u[1000006];
int main()
{
    freopen("capsocong.inp", "r", stdin);
    freopen("capsocong.out", "w", stdout);
    bool flag = false;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    sort(arr + 1, arr + n + 1);
    d = arr[2] - arr[1];
    for (int i = 1; i < n; i++)
        if (arr[i + 1] == arr[i] + d)
            flag = true;
        else
        {
            flag = false;
            break;
        }
    if (flag)
    {
        cout << "yes" << '\n';
        for (int i = 1; i <= n; i++)
            cout << arr[i] << " ";
    }
    else
        cout << "no" << endl;
}