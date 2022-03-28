//https://oj.vnoi.info/problem/vcowflix
#include<bits/stdc++.h>
using namespace std;

long long c,n,a[5005],f[5005][5005],ans=INT_MIN;
int main()
{
    cin >> c >> n;
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=c;j++)
        {
            if(a[i]<=j) 
                f[i][j]=max(f[i-1][j-a[i]]+a[i],f[i-1][j]);
            else 
                f[i][j]=f[i-1][j];
        }
    }
    cout << f[n][c];
    return 0;
}