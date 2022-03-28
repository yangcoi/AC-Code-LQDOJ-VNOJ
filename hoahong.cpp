#include <bits/stdc++.h>
using namespace std;
long long x, y, hh, ans;
string HH = " 79";
int dem(long long n)
{
    return floor(log10(n) + 1);
}
void hoahong(int k, int length)
{
    if (k > length)
    {
        if ((hh >= x) && (hh <= y))
            ans++;
        return;
    }
    for (int i = 1; i <= 2; i++)
    {
        hh = hh * 10 + int(HH[i]) - '0';
        hoahong(k + 1, length);
        hh /= 10;
    }
}
int main()
{
    freopen("hoahong.INP", "r", stdin);
    freopen("hoahong.OUT", "w", stdout);
    int l, r;
    cin >> x >> y;
    l = dem(x), r = dem(y);
    for (int i = l; i <= r; i++)
    {
        hh = 0;
        hoahong(1, i);
    }
    cout << ans;
}