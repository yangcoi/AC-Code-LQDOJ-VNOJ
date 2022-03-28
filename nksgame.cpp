//https://oj.vnoi.info/problem/nksgame
#include<bits/stdc++.h>
using namespace std;

long long n,b[100005],c[100005],ans,f[100005];
int main()
{

    cin >> n;
    for(int i=1;i<=n;i++) cin >> b[i];
    for(int i=1;i<=n;i++) cin >> c[i];
    sort(c+1,c+n+1);
    ans=INT_MAX;
    int tmp;
    for(int i=1;i<=n;i++)
    {
        int k=lower_bound(c+1,c+n+1,-b[i])-c;
        if(k==n+1) tmp=c[n];
        else tmp=c[k];
        ans=min(ans,abs(b[i]+tmp));
        if(k!=1)
        {
            tmp=c[k-1];
            ans=min(ans,abs(tmp+b[i]));
        }
    }
    cout << ans;
    return 0;
}
