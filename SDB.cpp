#include<bits/stdc++.h>
using namespace std;

long long t, a, b, prime[1000006], prefix[1000006], dem[1000006];

int main()
{
    freopen("SDB.INP", "r", stdin);
    freopen("SDB.OUT", "w", stdout);
    prime[0] = 1;
    prime[1] = 1;
    for(int i = 1; i <= 1000000; ++i)
            for(int j = i; j <= 1000000; j += i) ++prime[j];

    for(int i = 1; i <= 1000000; ++i) if(i%3 == 0 && prime[i] == 9) ++dem[i];
    for(int i = 1; i <= 1000000; ++i) prefix[i] = prefix[i-1] + dem[i];

    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        cout << prefix[b] - prefix[a-1] << "\n";
    }
    return 0;
}
