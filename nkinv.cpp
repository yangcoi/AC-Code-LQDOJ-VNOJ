//https://oj.vnoi.info/problem/nkinv
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef pair<double,double> dd;
#define ll long long

ll tree[70001 * 4] = {};
ll res = 0;

void update(int id,int value,int l,int r)
{
	tree[id]++;
	if(l < r)
	{
		int m = (l + r) / 2;
		if(value <= m)
		{
			update(2 * id,value,l,m);
			res += tree[2 *id + 1];
		}
		else update(2 * id + 1,value,m+1,r);
			
		
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,t;
	cin >> n;
	for(int i = 1; i <= n;i++)
	{
		cin >> t;
		update(1,t,1,60000);
	}
	cout << res;
	
    return 0;
}
