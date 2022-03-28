
#include <algorithm>
#include<bits/stdc++.h>
#include <vector>
using namespace std;
long long luythua(long long a, long long n, long long t)
{
	if (n==0) return 1;
	if (n==1) return a%t;
	long long tmp=luythua(a, n/2,t);
	if (n%2==0) return (tmp*tmp)%t;
	return (((tmp*tmp)%t)*a)%t;
}


bool notf[2000000];

int main() {
    freopen("PSEPRIME.INP", "r", stdin);
    freopen("PSEPRIME.OUT", "w", stdout);
    notf[0] = true;
    notf[1] = true;
    for (int i = 2; i * i <= 1000000; i++)
        if (!notf[i])
        {
            for (int j = i * i; j <= 1000000; j += i)
            notf[j] = true;
        }
    ios::sync_with_stdio(false); cin.tie(0);
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
        if (i %2!=0)
            if (luythua(2,i,i)==2 && notf[i])
                cout << i << '\n';
}
