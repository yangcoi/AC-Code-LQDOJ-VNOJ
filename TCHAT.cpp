#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n;

int main()
{
    freopen("TCHAT.INP", "r", stdin);
    freopen("TCHAT.OUT", "w", stdout);
    cin >> n;
    if (n%2==0 && n%7==0)
        cout<<"CO";
    else
        cout<<"KHONG";
    return 0;
}
