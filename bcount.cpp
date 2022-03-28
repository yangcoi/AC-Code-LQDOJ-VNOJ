#include <bits/stdc++.h>
using namespace std;

const int N = 1e6;
int n, q, arr[N], f1[N], f2[N], f3[N];

int main()
{
    bool k1 = 0, k2 = 0, k3 = 0;
    cin >> n >> q;
    for (int  i = 1; i <= n; i++)
        cin >> arr[i];
    if (arr[1] == 1)
        k1 = 1;
    else if (arr[1] == 2)
        k2 = 1;
    else
        k3 = 1;
    f1[1] = k1;
    f2[1] = k2;
    f3[1] = k3;
    for (int i = 2; i <= n; i++)
    {
        k1 = k2 = k3 = 0;
        if (arr[i] == 1)
            k1 = 1;
        else if (arr[i] == 2)
            k2 = 1;
        else
            k3 = 1;
        f1[i] += f1[i - 1] + k1;
        f2[i] += f2[i - 1] + k2;
        f3[i] += f3[i - 1] + k3;
    }
    for (int i = 1; i <= q; i++)
    {
        int l, r;
        cin >> l >> r;
        cout << f1[r] - f1[l - 1] << " " << f2[r] - f2[l - 1] << " " << f3[r] - f3[l - 1] << '\n';
    }
}
