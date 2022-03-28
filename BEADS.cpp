#include <bits/stdc++.h>
using namespace std;
int n, a[100005], s[10005], dp1[10005],dp2[10005],k,res;
int main()
{
    //freopen ("monster.inp","r", stdin);
    //freopen("monster.out","w",stdout);
    cin>>n;
    for (int i=1; i<=n; i++)
        cin>>a[i];
    k=1;
    s[1] = a[n];
    dp1[n] = 1;
    for (int i=n-1; i>=1; i--)
    {
        int j = k;
        while (j > 0 && a[i]>=s[j])
            j--;
        if (j==k)
            s[++k] = 0;
        s[j+1] = max(s[j+1],a[i]);
        dp1[i]=j+1;
    }
    k=1;    memset(s,0,sizeof(s));
    s[1] = a[n];
    dp2[n] = 1;
    for (int i=n-1; i>=1; i--)
    {
        int j = k;
        while (j > 0 && a[i]<=s[j])
            j--;
        if (j==k)
            s[++k] = 1e9+7;
        s[j+1] = min(s[j+1],a[i]);
        dp2[i]=j+1;
    }

    for (int i=1; i<=n ; i++)
        res=max(res,dp1[i]+dp2[i]-1);
    cout<< res;
    return 0;
}
