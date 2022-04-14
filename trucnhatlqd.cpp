//https://lqdoj.edu.vn/problem/trucnhat
#include<bits/stdc++.h>
using namespace std;

#define ll long long
int readInt() { int x; return cin >> x, x; }

int main()
{
    int lim = 5e6;
    vector<int> div_sum(lim + 1, 0);
    for (int i = 1; i <= lim; ++i)
        for (int j = i; j <= lim; j += i)
            div_sum[j] += i;

    vector<bool> check(lim + 1);
    for (int i = 0; i <= lim; ++i)
        check[i] = (div_sum[i] < i * 2);

    int res = 0;
    for (int n = readInt(); n--; res += check[readInt()]);

    cout << res;
    return 0;
}
