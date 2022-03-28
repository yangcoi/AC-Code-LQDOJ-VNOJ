#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n;
string str;
int main()
{
    freopen("CHUHOA.INP", "r", stdin);
    freopen("CHUHOA.OUT", "w", stdout);
    int i;
    getline(cin,str);
    for(i=0;i<str.size();i++)
    {
        if(str[i]>='a'&&str[i]<='z')
            str[i]=str[i]-32;
   }
   cout<<str;
}
