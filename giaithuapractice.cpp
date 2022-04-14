
//https://lqdoj.edu.vn/problem/giaithuapractice
#include<bits/stdc++.h>
using namespace std;

#define ll long long
int readInt() { int x; return cin >> x, x; }

int gt(int n)
{
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    else
        return gt(n-1)*n;
}
int n;
int main()
{
    cin>>n;
    
    cout<<gt(n);
}
