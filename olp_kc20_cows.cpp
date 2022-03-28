#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,s; cin >> n >> s;
    long long tong = (n+1)*n/2;
    cout << tong - s;
    return 0;
}
