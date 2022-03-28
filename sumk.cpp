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
//https://lqdoj.edu.vn/problem/sumseq
#include <bits/stdc++.h>
using namespace std;

long long t(long long n) {
    long long tong = 0;
    while(n != 0)
    {

        tong += (n % 10);
        n /=10;
    }
    return tong;
}
long long n,k,a[100000],tong,maxt;
int main () {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>k;

    for(int i = 0; i < n;i++)
        cin>>a[i];

    for(int i = 0; i < k;i++)
        tong += a[i];
    maxt = tong;
    for(int i = k;i<n;i++)
    {
        tong -= a[i-k];
        tong += a[i];
        maxt = max(maxt,tong);
    }
    cout<<maxt;
}

