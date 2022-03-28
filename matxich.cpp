#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("matxich.inp", "r", stdin);
    freopen("matxich.out", "w", stdout);
    map<char, int> mp;
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
        if (str[i] == '0')
            mp[str[i]]++;
    cout << mp['0'] << endl;
}