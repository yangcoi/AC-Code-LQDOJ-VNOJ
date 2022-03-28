#include<bits/stdc++.h>
using namespace std;
long long n;
int ktnt(long long nn)
{
    if (nn<=1) return 0;
    for (int i=2;i<=sqrt(nn);++i)
                if (nn % i==0) return 0;
    return 1;
}

int main(){
	cin>>n;
	if (ktnt(n) == 1)
        cout<<"YES";
    else
        cout<<"NO";

}
