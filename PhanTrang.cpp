//https://oj.vnoi.info/problem/ptrang
#define maxn 6005
#include<bits/stdc++.h>
int s[maxn],res[maxn],n,l;
using namespace std;
int main()
{
    //freopen("ptrang.inp","r",stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>l;
    for (int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        s[i]=s[i-1]+x;
    }
    for (int i=1;i<=n;i++)
        res[i]=1000000000;
    res[0]=0;
    for (int i=1;i<=n;i++)
        for (int j=i-1;j>=0;j--)
            if (s[i]-s[j]<=l)
    {
        res[i]=min(res[i],max(res[j],l-(s[i]-s[j])));
    }
    else break;
    cout<<res[n];
    return 0;
}
