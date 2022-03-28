#include<bits/stdc++.h>

using  namespace std;
long long n;
long long d = 0;

int main(){
    cin >> n;
    long long i;
    long long t=sqrt(n);
    for (i=1;i<=t;i++)
        if (n%i==0)
            d += i+(n/i);
    if(t * t == n)
        d -= t;
    if (d-n==n)
        cout << "YES";
    else
        cout<<"NO";
    return 0;
}
