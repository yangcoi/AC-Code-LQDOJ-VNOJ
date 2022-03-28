#include <bits/stdc++.h>
using namespace std;
long long res[3][3];
long long n;
long long a[3][3];
long long maxn=1e9+7;
void power(){
    long long t1,t2,t3,t4;
    t1=res[1][1]; t2=res[1][2]; t3=res[2][1]; t4=res[2][2];
    res[1][1]=(unsigned long long)t1*t1+t2*t3;   res[1][1]%=maxn;
    res[1][2]=(unsigned long long)t1*t2+t2*t4;   res[1][2]%=maxn;
    res[2][1]=(unsigned long long)t3*t1+t4*t3;   res[2][1]%=maxn;
    res[2][2]=(unsigned long long)t3*t2+t4*t4;   res[2][2]%=maxn;
}
void nhan(){
    long long t1,t2,t3,t4;
    t1=a[1][1]; t2=a[1][2]; t3=a[2][1]; t4=a[2][2];
    a[1][1]=(unsigned long long)t1*res[1][1]+t2*res[2][1];   a[1][1]%=maxn;
    a[1][2]=(unsigned long long)t1*res[1][2]+t2*res[2][2];   a[1][2]%=maxn;
    a[2][1]=(unsigned long long)t3*res[1][1]+t4*res[2][1];   a[2][1]%=maxn;
    a[2][2]=(unsigned long long)t3*res[1][2]+t4*res[2][2];   a[2][2]%=maxn;
}
void fibo(){
    do {
        if (n%2==1) nhan();
        n/=2;
        power();
    } while (n!=0);
}
int main()
{
    freopen("fibo.inp","r",stdin);
    freopen("fibo.out","w",stdout);
    cin>>n;
    res[1][1]=0; res[1][2]=1; res[2][1]=1; res[2][2]=1;
    a[1][1]=1; a[1][2]=0;  a[2][1]=0; a[2][2]=1;
    if (n==0 || n==1) cout<<"1"; else {
        fibo();
        cout<<(unsigned long long)(a[1][1]+a[1][2])%maxn;
    }
    return 0;
}
