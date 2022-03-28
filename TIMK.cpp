Giáng My
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> ii;
#define FORW(i,a,b) for(int i=a;i<=b;i++)
#define FORB(i,a,b) for (int i=a;i>=b;i--)
#define forw(i,a,b) for (ll i=a;i<=b;i++)
#define forb(i,a,b) for (ll i=a;i>=b;i--)
#define fast {ios::sync_with_stdio(false); cin.tie(0); }
#define fi first
#define se second
#define pu push
#define puf push_front
#define pb push_back
#define pof pop_front
#define pob pop_back
#define fr front
#define all(a) a.begin(),a.end()
#define endl "\n"
#define db(val) "["#val" = "<<(val)<<"] "
int dX[] ={0,-1,0,1};
int dY[]= {-1,0,1,0};
const ll oo=1e18;
const ll MOD=1e9+7;
const ll mod=1e9+9;
bool is_prime[327000];
ll pr[500000];
ll legendre (ll n, ll k) {
	ll res = 0;
	ll pow=1;
	while (pow<=n) {
        pow*=k;
	    res+=(n/pow);
	}
	return res;
}
int main()
{
    fast;
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll> > fact;
    for(int i=2;i*i<=m;i++) {
        if(m%i==0) {
            int cnt = 0;
            while(m%i==0) m/=i, cnt++;
            fact.pb({i, cnt});
        }
}
    if(m != 1) fact.pb(ii(m, 1));
    ll res=999999999;
    for (int i=0;i<fact.size();i++)
      res=min(res,legendre(n,fact[i].fi)/fact[i].se);
    cout<<res;

}