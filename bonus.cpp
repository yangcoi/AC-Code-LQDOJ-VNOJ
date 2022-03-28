//https://oj.vnoi.info/problem/bonus
#include<bits/stdc++.h>
#define maxn 1001
#define f(a,b,c) for (a=b;a<=c;a++)
using namespace std;
int n,k,i,j,re,x,a[maxn][maxn];
int main()
{
  cin >> n >> k;
  f(i,1,n)
   f(j,1,n)
   {
     cin>>x;
     a[i][j]=a[i-1][j]+a[i][j-1]-a[i-1][j-1]+x;
     if (i>=k && j>=k) 
        re=max(re,a[i][j]-a[i-k][j]-a[i][j-k]+a[i-k][j-k]);
   }
  cout << re << endl;
  return 0;
}