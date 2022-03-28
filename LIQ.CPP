#include <bits/stdc++.h>
using namespace std;
int n, a[100003],f [100003], ans;
int main()
{
    freopen("LIQ.inp","r",stdin);
    freopen("LIQ.out","w",stdout);
    cin>>n;
    for (int i=1;i<=n;++i)cin>>a[i];
    for (int i=1;i<=n;++i)
    {
        int k=0;
        for (int j=1;j<=i-1;++j)
            if (a[j]<=a[i])k=max(k,f[j]);
        //Truong hop khong co a[j] <=a[i] thi k=0;
        f[i]=k+1;
        ans=max(ans,f[i]);
    }
    cout<<ans;
}
//DDPT: O(N^2) N<=1000 ==> ACCEPTED
