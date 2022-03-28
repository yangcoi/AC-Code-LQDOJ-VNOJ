#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false), cin.tie(NULL)

int n, s1, s2;
string temp;
int main()
{
    faster;
    cin >> n;
    while (n--)
    {
        cin >> temp;
        if (temp[0] == '-')
            s2++;
        else if (temp[0] == '0')
            continue;
        else
            s1++;
    }
    cout << s2 << ' ' << s1;
}