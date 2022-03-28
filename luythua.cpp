#include<bits/stdc++.h>
using namespace std;

long long ans,a,n,k,t,dem[10001];
long long luythua(long long a, long long n)
{
    long long t=1e4;
	if (n==0) return 1;
	if (n==1) return a%t;
	long long tmp=luythua(a, n/2);
	if (n%2==0) return (tmp*tmp)%t;
	return (((tmp*tmp)%t)*a)%t;
}
int main(){
    cin>>a>>n;
    cout<< luythua(a,n);

}
  