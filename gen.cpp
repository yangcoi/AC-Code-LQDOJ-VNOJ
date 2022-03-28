#include <bits/stdc++.h>
using namespace std;

long long n;
int Amax, a[100001], t, s[10001],res;
int main()
{
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        Amax=max(Amax,a[i]);
    }
    t=sqrt(Amax);
    for (int i=1;i<=t; ++i)
        for (int j=i; j<=Amax/i; ++j)
            if (i==j)
                s[i*j]+=i;
            else
            s[i*j]+=i+j;
    for (int i=1;i<=n;++i)
        if (s[a[i]]-a[i]<a[i])
            ++res;
    cout<<res;
}
