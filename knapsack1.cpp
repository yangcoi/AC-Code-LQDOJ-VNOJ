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
//https://lqdoj.edu.vn/problem/knapsack1
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
int wt[101],val[101];
int dp[101][100010];
int dfs(int i,int left)
{
    if(i<0)
        return 0;
    if(dp[i][left]!=-1)
        return dp[i][left];
    int ans=dfs(i-1,left);
    if(left>=wt[i])
        ans=max(ans,dfs(i-1,left-wt[i])+val[i]);
    return
        dp[i][left]=ans;
}
int32_t main()
{
    memset(dp,-1,sizeof(dp));
    int n,w;
    cin>>n>>w;
    for(int i=0;i<n;i++)
        cin>>wt[i]>>val[i];
    cout<<dfs(n-1,w)<<endl;
}

