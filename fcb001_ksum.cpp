//#################################################################
//#                             _`				#
//#                          _ooOoo_				#
//#                         o8888888o				#
//#                         88" . "88				#
//#                         (| -_- |)				#
//#                         O\  =  /O				#
//#                      ____/`---'\____				#
//#                    .'  \\|     |//  `.			#
//#                   /  \\|||  :  |||//  \			#
//#                  /  _||||| -:- |||||_  \			#
//#                  |   | \\\  -  /'| |   |			#
//#                  | \_|  `\`---'//  |_/ |			#
//#                  \  .-\__ `-. -'__/-.  /			#
//#                ___`. .'  /--.--\  `. .'___			#
//#             ."" '<  `.___\_<|>_/___.' _> \"".			#
//#            | | :  `- \`. ;`. _/; .'/ /  .' ; |		#
//#            \  \ `-.   \_\_`. _.'_/_/  -' _.' /		#
//#=============`-.`___`-.__\ \___  /__.-'_.'_.-'=================#
//                           `=--=-'
//
//
//
//          _.-/`)
//         // / / )
//      .=// / / / )
//     //`/ / / / /
//    // /     ` /
//   ||         /
//    \\       /
//     ))    .'
//    //    /
////
//https://oj.vnoi.info/problem/fcb001_ksum
#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
const int MAXN = 1e5+5;
const ll INF = 1e18;

ll a[MAXN],pref[MAXN];

signed main() {
    int n,k;
    cin >> n >> k;
    ll a[n+1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];


    ll ans = -INF;
    pref[1] = a[1];
    for (int i = 2; i <= n; i++)
        pref[i] = pref[i-1]+a[i];
    for (int i = k; i <= n; i++)
        ans = max(ans,pref[i]-pref[i-k]);
    cout << ans;
    return 0;
}



















