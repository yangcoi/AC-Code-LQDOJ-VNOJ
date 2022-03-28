#include <bits/stdc++.h>
using namespace std;

long long n;
long long res;
int main()
{
    freopen("capso.inp", "r", stdin);
    freopen("capso.out", "w", stdout);
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        res+=n/i;
    }
    cout<<res;1

}
