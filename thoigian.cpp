#include<bits/stdc++.h>
using namespace std;

long long gio, phut, giay;
int main()
{
    freopen("thoigian.inp", "r", stdin);
    freopen("thoigian.out", "w", stdout);

    cin >> gio >> phut >> giay;
    if(giay == 59)
    {
        if(phut == 59)
        {
            if(gio == 23) cout << 0 << " " << 0 << " " << 0;
            else cout << gio+1 << " " << 0 << " " << 0;
        }
        else cout << gio << " " << phut+1 << " " << 0;
    }
    else cout << gio << " " << phut << " " << giay+1;
    return 0;
}
