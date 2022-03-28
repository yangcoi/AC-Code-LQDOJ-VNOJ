//https://oj.vnoi.info/problem/nkcable
#include <bits/stdc++.h>
using namespace std;

int n, c[50005], f[50005];

int main()
{
    cin >> n;
    for(int i = 1 ; i < n ; i++) cin >> c[i];

    f[2] = c[1];
    f[3] = c[1] + c[2];

    for(int i = 4 ; i <= n ; i++)
    {
        f[i] = c[i-1] + min(f[i-1], f[i-2]);
    }
    cout << f[n];


}