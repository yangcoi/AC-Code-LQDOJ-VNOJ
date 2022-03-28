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
//https://oj.vnoi.info/problem/atcoder_dp_i

#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int main()
{

    int n;
    cin >> n;
    vector<double> p(n);
    for (auto &i : p)
        cin >> i;
    vector<vector<double>> dp(n + 1, vector<double>(n + 1));
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            dp[i][j - 1] += dp[i - 1][j - 1] * (1 - p[i - 1]);
            dp[i][j] += dp[i - 1][j - 1] * p[i - 1];
        }
    double r = 0;
    for (int j = 0; j <= n; j++)
        if (j << 1 > n)
            r += dp[n][j];
    cout << fixed << setprecision(9) << r << '\n';
    return 0;
}
