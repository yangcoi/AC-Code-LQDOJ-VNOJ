#include <iostream>
using namespace std;

const int MAX = 1000;

int main() {
  int n, a[MAX];

  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];


  // solve
  int cnt = 0;
  for (int i = 0; i < n; i++) 
    for (int j = i + 1; j < n; j++) 
        if (a[i] > 2 * a[j]) 
            cnt++;


  cout << cnt;

  return 0;
} 