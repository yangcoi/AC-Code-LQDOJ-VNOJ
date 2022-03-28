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

string a;
long long t;

bool solution(string a)
{
    for( int i = 0; i < a.length(); ++i)
    {
        if ( i%2 == 0 && (int)(a[i] - '0') %2 == 0 ) return false;
        else if ( i%2 != 0 && (int)(a[i] - '0') %2 != 0 ) return false;
    }
    return true;
}
int main()
{
    cin >> t;
    while(t--)
    {
        cin >> a;
        if ( solution(a) == true ) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}