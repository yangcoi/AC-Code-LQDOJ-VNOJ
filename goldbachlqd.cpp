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
//https://lqdoj.edu.vn/problem/goldbach
#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

int f[100000000];
void sang()
{
    f[0]=1;
    f[1]=1;
    for(int i=2;i*i<=1000000;i++)
    {
        if(f[i]==0)
            for(int j=i*i;j<=1000000;j+=i)
                f[j]=1;
    }
}
int n,ans;
int main()
{
	cin>>n;
	sang();
	for(int i=2;i<=n/2;i++)
    {
        if(f[i]==0 && f[n-i]==0)
        {
            ans++;
            //cout<<i<<" "<<n-i<<'\n';
        }
    }
	cout<<ans;
	return 0;
}
