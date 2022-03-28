#include<bits/stdc++.h>
using namespace std;

long long ans;
string s;
int main()
{
    freopen("TONGCHUSO.INP", "r", stdin);
    freopen("TONGCHUSO.OUT", "w", stdout);
    cin >> s;
    for(int i = 0; i < s.length(); ++i) ans += int(s[i] - '0');
    cout << ans;
    return 0;
}
