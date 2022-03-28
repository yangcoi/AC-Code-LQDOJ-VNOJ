#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL m;
string s;
bool prime(long long n)
{
    long long i;
    bool res=true;
    if (n<=1)
        res=false;
    for (i=2;i<=sqrt(n);i++)
        if (n % i==0)
            res=false;
    return res;
}
void xuli()
{
    long long x,i,j,v;
    v=0;
    m=0;
    for (i=1;i<=s.size();i++)
    {
        v=0;
        j=i;
        while(j<=s.size())
        {
            if ((s[j]<'0') or (s[j]>'9'))
                break;
            x=s[j]-'0';
            v=v*10+x;
            if (v>=1000000)
                break;
            if ((prime(v)) and (v>m))
                m=v;
            j++;
        }
    }
    cout<<m;
}
int main()
{
    freopen("MATKHAU.INP", "r", stdin);
    freopen("MATKHAU.OUT", "w", stdout);
    cin>>s;
    xuli();
}
