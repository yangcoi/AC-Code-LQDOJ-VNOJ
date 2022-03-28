#include <bits/stdc++.h>
using namespace std;
int n, mu;
int nt(int k){
    int ans=1;
    for(int i=2;i<=sqrt(k);i++)
        if(k%i==0)ans=0;
    return ans;
}
int Cal(int p){
    int tmp=p;
    int mu=0;
    while(n/tmp>0){
        mu=mu+n/tmp;
        tmp=tmp*p;
    }
    return mu;
}
int main()
{
    freopen("phantich.inp","r",stdin);
    freopen("phantich.out","w",stdout);
    cin>>n;
    for(int i=2;i<=n && n>1;i++)
        if(nt(i)==1){
            mu=Cal(i);
            cout<<i<<" "<<mu<<"\n";
        }
}