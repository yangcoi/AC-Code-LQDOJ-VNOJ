#include <bits/stdc++.h>
using namespace std;

struct doan
{
    int l;
    int w;
};
int t,n,s[5001];
doan a[5001];
bool cmp(doan u, doan v)
{
    return (u.l<v.l) || (u.l == v.l && u.w<v.w);
}
int main()
{
    freopen("stick.inp","r",stdin);
    freopen("stick.out","w",stdout);
    cin>>t;
    while (t--)
    {
        cin>>n;
        for (int i=1;i<=n;i++)
            cin>> a[i].l>>a[i].w;
        sort(a+1,a+n+1,cmp);
        int k=1;
        s[1]=a[1].w;
        for (int i=2;i<=n;i++)
        {
            int j=k;
            while (j>0 && s[j]<=a[i].w)
                j--;
            if (j==k)
                s[++k] = a[i].w;
            s[j+1] = max(s[j+1],a[i].w);
        }
        cout<<k<<'\n';
    }
    return 0;

}
