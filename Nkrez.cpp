//https://oj.vnoi.info/problem/nkrez
#include <bits/stdc++.h>
#define nmax 10007

struct data
{
    long bd,kt,tg;
};

using namespace std;

long long n,f[nmax],ans=-1;
data a[nmax];

bool comp(data a, data b)
{
    return a.bd < b.bd;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n ;
    for (long i=1; i<=n; i++)
      {
          cin >> a[i].bd >> a[i].kt; 
          a[i].tg=a[i].kt-a[i].bd;
    }
    sort(a+1,a+n+1,comp);
    for (long i=1; i<=n; i++)
    {
        f[i]=a[i].tg;
        for (long j=1; j<=i-1; j++)
          if (a[j].kt<=a[i].bd && f[i]<f[j]+a[i].tg) 
            f[i]=f[j]+a[i].tg;
        ans=max(ans,f[i]);
    }
    cout << ans;
}
