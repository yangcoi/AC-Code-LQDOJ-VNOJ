//https://oj.vnoi.info/problem/fct020_seq51
#include<bits/stdc++.h>
using namespace std;

int n,res,len;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;cin>>x;
        len+=1;
        while(x<len)len--;
        res=max(res,len);
    }
    cout<<res;
}
