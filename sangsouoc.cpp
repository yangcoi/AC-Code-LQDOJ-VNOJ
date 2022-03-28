#include<bits/stdc++.h>
using namespace std;

long long n, prime[3800001];
int main()
{
    for(int i = 1; i <= 3800000; ++i){
        for(int j = i; j <= 3800000; j +=i) prime[j]++;
    }
    cin >> n;
    for(int i = 1; i <= 10000000; ++i){
        if(prime[i] == n){
            cout << i;
            break;
        }
    }
    return 0;
}