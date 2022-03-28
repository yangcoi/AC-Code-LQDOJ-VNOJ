#include <bits/stdc++.h>
using namespace std;

const int N = 30000+2;
int n, a[N], lt[N];

int main() {
    cin>>n;
    for(int i = 0; i < n; ++i)
        cin>>a[i];
    int maxlen = 0;
    for(int i = 0; i < n; ++i) {
        int dp = lower_bound(lt, lt+maxlen, a[i]) - lt;
        if(dp == maxlen) ++maxlen, lt[dp] = a[i];
        else lt[dp] = min(lt[dp], a[i]);
    }
    cout<<maxlen;
    return 0;
}
