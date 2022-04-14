//https://oj.vnoi.info/problem/acmnb
#include <bits/stdc++.h>
using namespace std;

const int N = 4e5 + 5;

int n, a[2 * N];

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  int ans = 0;
  for (int i = 1; i <= 2 * n; ++i) {
    int x, y;
    cin >> x >> y;
    ans += x;
    a[i] = y - x;
  }
  sort(a + 1, a + 1 + 2 * n);
  for (int i = 1; i <= n; ++i) {
    ans += a[i];
  }
  cout << ans << '\n';
  return 0;
}
