#include <bits/stdc++.h>
using namespace std;

long long f[1000],c[100];

int main(){

    int m,n;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
        cin >> c[i];
    
    memset(f,0,sizeof(f));
    f[0] = 1;
    for (int i = 0; i < m; i++)
        for (int j = 0; j <= n; j++)
            f[j + c[i]] += f[j];

    cout << f[n];
    return 0;
}
