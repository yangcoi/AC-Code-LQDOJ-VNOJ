//https://oj.vnoi.info/problem/m3tile
#include <bits/stdc++.h>
using namespace std;
long long F[31];
long long G[31];

void solve() {
	F[0] = G[0] = 1;
	F[1] = G[1] = 0;
	for(int i=2; i<=30; i++)
    {
		F[i] = F[i-2] + 2*G[i-2];
		G[i] = F[i] + G[i-2];
	}
	while(true) {
		int n;
		cin >> n;
		if(n == -1)
			exit(0);
		cout << F[n] << endl;
	}
}
int main() {
  solve();
  return 0;
}
