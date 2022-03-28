//https://oj.vnoi.info/problem/predhbb21_parallel2
#include<bits/stdc++.h>

using namespace std;
int n,x,y;
int main(){
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>x>>y;
        if ((x <= 2 && y <= 1) || (x <= 1 && y <= 2))
            cout<<"Yes"<<'\n';
        else
            cout<<"No"<<'\n';
    }
}
