//https://oj.vnoi.info/problem/dtdoi
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[101],S,max = 0,f[10001];
    cin>>n>>S;
    for(int i = 1;i<=n;i++)
    {
       cin>>a[i];
       if(a[i]>max)
          max = a[i];
    }
    int KQ = 0;
    if(S>10000)
    {
        int d = (S-10000)/max+1;
        S = S - max*d;
        KQ = KQ+d;
    }
    f[0] = 0;
    for(int i = 1;i<=S;i++)   
    {
        f[i] = 10000;max = 0;
        for(int j = 1;j<=n;j++)
        {
            if(i>=a[j] && f[i]>f[i-a[j]]+1)
                 f[i] = f[i-a[j]]+1;
        }
    }
    KQ = KQ + f[S];
    cout<<KQ;
}
