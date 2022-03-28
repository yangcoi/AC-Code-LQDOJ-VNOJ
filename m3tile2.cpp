////https://oj.vnoi.info/problem/m3tile
#include<bits/stdc++.h>
using namespace std;
long long a[40],dem=0,f[40];
int main()
{
    long long n;
    f[0]=1;
    f[1]=0;
    f[2]=3;
    for(int i=3;i<=30;i++)
    {
        if(i%2!=0) 
            f[i]=0;
        else
            f[i]=(4*f[i-2])-f[i-4];
    }
    while (cin >> n) 
    {
        if (n == -1) 
            break;
        cout << f[n] << "\n";
    }
    return 0;
}