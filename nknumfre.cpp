//https://oj.vnoi.info/problem/nknumfre
#include<bits/stdc++.h>
using namespace std;

int dao(int n)
{
    int res=0;
    while(n!=0)
    {
         int tmp= n%10;
         res=res*10+tmp;
         n=n/10;
    }
    return res;

}
int a,b,ans;
int main()
{
    cin>>a>>b;
    for(int i=a;i<=b;i++)
        if (__gcd(i,dao(i))==1)
            ans++;
    cout<<ans;
}
