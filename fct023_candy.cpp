//https://oj.vnoi.info/problem/fct023_candy
#include <bits/stdc++.h>

using namespace std;

const int N = 2e5 + 5;

long long pref[N];
int n;

void solve() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        pref[i] = pref[i - 1] + x;
    }

    long long res = 1e16;
    for (int i = 1; i < n; i++)
        res = min(res, abs(pref[i] - (pref[n] - pref[i])));

    cout << res;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
