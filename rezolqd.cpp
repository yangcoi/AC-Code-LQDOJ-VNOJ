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
//https://lqdoj.edu.vn/problem/rezo

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define maxn (ll)(1e5+5)

ll a[maxn],i,n,b[maxn],res,tmp=1;
int main(){
  cin>>n;
  for(i=1;i<=n;i++)
    cin>>a[i];
  for(i=1;i<=n;i++)
    b[i]=b[i-1]+a[i];
  sort(b,b+n+1);
  for(i=0;i<n;i++)
  {
      if(b[i]==b[i+1])
        tmp+=1;
      else
      {
          res+=tmp*(tmp-1)/2;
          tmp=1;
      }
  }
  res+=tmp*(tmp-1)/2;
  cout<<res;
  return 0;
}


