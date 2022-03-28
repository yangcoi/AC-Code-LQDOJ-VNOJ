#include<bits/stdc++.h>

using  namespace std;
#define reset(a) memset(a, 0, sizeof(a))
template<class T>
void maximize(T& x, T y){
    if(x < y) x = y;
}

int n;
int r[100001], h[100001], f[501];

void process(){
    cin >> n;
    for(int i = 1; i <= n; i ++) cin >> r[i] >> h[i];
    reset(f);
    for(int i = 1; i <= n; i ++){
        for(int j = r[i]; j <= 500; j ++) {
            maximize(f[r[i]], f[j] + h[i]);
        }
    }
    cout << *max_element(f + 1, f + 501);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("TOWER.inp","r",stdin);
    freopen("TOWER.out","w",stdout);
    process();
    return 0;
}
