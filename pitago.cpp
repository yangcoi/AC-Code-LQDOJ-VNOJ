#include <bits/stdc++.h>
using namespace std;

long long n;
long long res,a[10001],d[10001];
int main()
{
    map<int, int> ma;
    freopen("pitago.inp", "r", stdin);
    freopen("pitago.out", "w", stdout);
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        d[a[i]]=1;
    }
    sort(a+1,a+n+1);
    for (int i=1;i<=n-1;++i)
        for (int j=i+1;j<=n;++j)
           {
               long long t=a[i]*a[i]+a[j]*a[j];
               long long r=sqrt(t);
               if (r*r==t)
                res+=d[r];
           }
    cout<< res;

}
