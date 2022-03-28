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
/*
Gọi dp[i][j] là xác suất khi tung i đồng xu đầu tiên được j đồng xu ngửa.

Trường hợp 1: Đồng xu i là đồng ngửa => Ta cần tính xác suất để tung i−1 đồng đầu tiên được j−1 đồng ngửa. Vậy xác suất cho trường hợp này là dp[i−1][j−1]∗p[i].

Trường hợp 2: Đồng xu i là đồng sấp => Ta cần tính xác suất để tung i−1 đồng đầu tiên được j đồng ngửa. Vậy xác suất cho trường hợp này là dp[i−1][j]∗(1−p[i]).

Vậy xác suất để tung i đồng được j đồng ngửa là dp[i−1][j−1]∗p[i]+dp[i−1][j]∗(1−p[i])
Xác suất để tung n đồng được số đồng ngửa nhiều hơn số đồng sấp là dp[n][n/2+1]+dp[n][n/2+2]+...+dp[n][n]
*/
//https://lqdoj.edu.vn/problem/coins1

#include<bits/stdc++.h>
using namespace std;
double dp[3005][3005];
int main()
{
    cout.precision(15);
    int n;
    cin>>n;
    double p;
    dp[0][0]=1;
    for(int i=1;i<=n;i++)
    {
        cin>>p;
        for(int j=0;j<=i;j++)
            dp[i][j]=dp[i-1][j-1]*p+dp[i-1][j]*(1-p);
    }
    p=0;
    for(int i=n/2+1;i<=n;i++) p+=dp[n][i];
    cout<<p;
}