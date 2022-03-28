// https://oj.vnoi.info/problem/nktick

#include <bits/stdc++.h>
using namespace std;
const int maxN  = 1e5 + 7;
int main(){
    int n, t[maxN], r[maxN];
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> t[i];
    for(int i = 1; i < n; ++i)
        cin >> r[i];

    int f[maxN] =  {0};
    f[1] = t[1];
    for(int i = 2; i <= n; ++i){
        f[i] = min(f[i-1] + t[i], r[i - 1] + f[i - 2]);
    }
    cout << f[n];
}