//https://oj.vnoi.info/submission/901420
#include<bits/stdc++.h>
int a,b,c,x,z,y,t1,t2,m1,m2;
using namespace std;
int main()
{
    cin>>a>>b>>c;
    cin>>x>>y>>z;
    t1=a+b+c;
    t2=z+x+y;
    m1=max(a,max(b,c));
    m2=max(x,max(y,z));
    if (t1/2==m1)
        cout<<"yes"<<'\n';
    else
        cout<<"no"<<'\n';
    if (t2/2==m2)
        cout<<"yes"<<'\n';
    else
        cout<<"no"<<'\n';
}
