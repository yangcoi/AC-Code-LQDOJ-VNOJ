//https://oj.vnoi.info/problem/latgach
#include<bits/stdc++.h>
using namespace std;
string f[1000];
int n;
string add(string a,string b)
{
    string s="";
    while (a.length()<b.length()) a='0'+a;
    while (a.length()>b.length()) b='0'+b;
    int nho=0;
    int n=a.length()-1;
    for (int i=n;i>=0;i--)
    {
        int tmp=a[i]+b[i]-48*2+nho;
        if (tmp>=10) nho=1;
        else nho=0;
        s=char(tmp%10+48)+s;
    }
    if (nho==1) s='1'+s;
    return s;
}
int main()
{
    //freopen("latgach.inp","r",stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test;
    f[1]="1";
    f[2]="2";
    cin>>test;
    while(test)
    {
        test--;
        cin>>n;
        for (int i=3;i<=n;i++)
            f[i]=add(f[i-1],f[i-2]);
        cout<<f[n]<<"\n";
    }
    return 0;
}