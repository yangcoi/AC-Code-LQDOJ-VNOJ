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
//https://oj.vnoi.info/problem/atcoder_dp_k
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int a[105], f[N];
int n, k;

void solve() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= k; i++) {
        for (int j = 1; j <= n; j++)
            if (i - a[j] >= 0 && f[i - a[j]] == 0)
                f[i] = 1;
    }

    if (f[k] == 1)
        cout << "First";
    else
        cout << "Second";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tc = 1;
    //cin >> tc; cin.ignore();
    while (tc--)
        solve();
    return 0;
}