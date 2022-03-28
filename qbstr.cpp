//https://oj.vnoi.info/problem/qbstr
#include<bits/stdc++.h>

using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    a = " " + a;
    b = " " + b;
    int n = a.length(), m = b.length();
    int f[n+1][m+1];
    memset(f, 0, sizeof(f));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i] == b[j])
                f[i][j] = f[i-1][j-1] + 1;
            else 
                f[i][j] = max(f[i-1][j], f[i][j-1]);
        }
    }
    cout << f[n-1][m-1];
}