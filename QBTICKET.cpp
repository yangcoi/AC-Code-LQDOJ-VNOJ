//https://oj.vnoi.info/problem/qbticket
#include<bits/stdc++.h>
using namespace std;

#define lwb lower_bound
#define upb upper_bound
#define ar array
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ALL(v) (v).begin(), (v).end()
typedef long double ld;
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int,int> pii;

ll d[100005],dp[100005],pos[100005];
int n,s,f;
pii a[5];
void solve()
{
    for(int i=1;i<=3;++i) 
        cin>>a[i].fi;
    for(int i=1;i<=3;++i) 
        cin>>a[i].se;
    cin>>n;
    cin>>s>>f;
    for(int i=2;i<=n;++i) 
        cin>>d[i];
    if(s>f) 
        swap(s,f);
    for(int i=1;i<=3;++i) 
        pos[i]=s;
//    cout<<d[3]-d[2]<<endl;
    for(int i=s+1;i<=f;++i)
    {
        dp[i]=1e15;
        for(int j=1;j<=3;++j)
        {
            while(pos[j]<i&&d[i]-d[pos[j]]>a[j].fi) 
                ++pos[j];
            dp[i]=min(dp[i],dp[pos[j]]+a[j].se);
        }
    }
//    for(int i=s;i<=f;++i) cout<<dp[i]<<' ';
    cout<<dp[f];
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
}
