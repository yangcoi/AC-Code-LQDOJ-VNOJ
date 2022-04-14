//https://oj.vnoi.info/problem/qbmst
#include<bits/stdc++.h>
using namespace std;

const int NMAX = 1e4 + 7;

struct Road {
    int u, v, c;
    bool operator < (const Road &other) {
        return c<other.c;
    }
};
int n, m;
int par[NMAX];


int getRoot(int u) {
    return par[u] < 0 ? u : par[u] = getRoot(par[u]); 
}
bool Union(int u, int v) {
    u = getRoot(u), v = getRoot(v);
    if(u == v) return false;
    if(par[u] < par[v]) swap(u,v);
    par[u] += par[v];
    par[v] = u;
    return true;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> n >> m;
    vector<Road> g(m);
    while(m--) {
        int u, v, c; cin >> u >> v >> c;
        g.push_back({u,v,c});
    }

    long long ans = 0, d = 0;
    sort(g.begin(),g.end());
    memset(par,-1,sizeof(par));
    for(Road x: g) {
        if(d==n-1) break;
        if(Union(x.u,x.v)) {
            ans += x.c;
            d++;
        }
    }
    cout << ans;

    return 0;
}
