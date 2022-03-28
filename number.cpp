#include <bits/stdc++.h>
using namespace std;
int d, k;
int n,ans[10000000];
bool used[10][10][10];

void solve(int d, int k)
{
    int x0,x1,du;
    n=0;x1=d; du=0;
    memset(used,false, sizeof(used));
    while (1==1)
    {
        x0=(x1*k+du)%10;
        du=(x1*k+du)/10;
        ++n;
        ans[n]=x0;
        if (du==0 && x0==d &&x1!=0)break;
        x1=x0;
        if (used[x1][x0][du]==true){cout<<-1<<"\n"; return;}
        else used[x1][x0][du]=true;
    }
    for (int i=n-1;i>=1;--i)cout<<ans[i];
    cout<<d<<"\n";
    return;
}
int main()
{
    freopen("number.inp","r",stdin);
    freopen("number.out","w",stdout);
    while (cin>>d)
    {
        cin>>k;
        //cout<<d<<" "<<k<<"\n";
       solve(d,k);
    }
    return 0;
}
