//https://oj.vnoi.info/problem/nkabd
#include <bits/stdc++.h>
using namespace std;

int main() {
  long long L, R, d = 0, A[1000006];

  cin>>L>>R;
  for (long i = 1; i <= R; i++)
    A[i] = 1;

  for (long i = 2; i <= R; i++)
    for (long j = 2 * i; j <= R; j += i)
      A[j] += i;

  for (long i = L; i <= R; i++)
    d += A[i] > i;

  cout<<d;
}
