//https://oj.vnoi.info/problem/fct027_5_name
#include<bits/stdc++.h>
using namespace std;

string s;
string xcg(string s)
{
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==' ' &&s[i+1]==' ')
		{
			s.erase(s.begin()+i);
			i--;
		}
	}
	return s;
}

string xdc(string s)
{
	while(s[0]==' ')
	{
		s.erase(s.begin()+0);
	}

	while(s[s.length()-1]==' ')
	{
		s.erase(s.begin()+s.length()-1);
	}
	return s;
}

string hoa(string s)
{
	for(int i=0;i<s.length();++i)
	{
		if(s[i]>= 'A' && s[i]<='Z')
            s[i]+= 32;
	}
	s[0]-= 32;
	for(int i = 0; i < s.length(); ++i)
	{
		if(s[i]== ' ' && s[i+1]!= ' ')
            s[i+1]-= 32;
	}
	return s;
}
int n;
int main()
{
    cin>>n;
    for(int i=1;i<=n+1;i++)
    {
        getline(cin,s);
        s = xdc(s);
        s = xcg(s);
        s = hoa( s );
        cout<<s;
        cout<<'\n';
    }
	return 0;
}
