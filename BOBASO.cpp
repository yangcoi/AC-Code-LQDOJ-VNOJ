#include <bits/stdc++.h>

using namespace std;

vector<int> b;
int n;
int d[3];
int t = 0;

void print(){
	int m = 0;
	for (int i = 0; i < 3; i++)
		m += d[i];
	if (m == n)
		t++;
}

void sang(int n){
	int a[n+1] = {0};
	for (int i = 2; i <= n; i++)
		if (a[i] == 0){
			b.push_back(i);
			for (int j = i*2; j <= n; j += i)
				a[j] = 1;
		}
}

void Try(int k){
	for (int i = 0; i < b.size();i++)
		if (d[k-1] <= b[i]){
			d[k] = b[i];
			if (k == 2)
				print();
			else
				Try(k+1);
		}
}


int main(){
    freopen("BOBASO.INP", "r", stdin);
    freopen("BOBASO.OUT", "w", stdout);
	cin >> n;
	sang(n);
	Try(0);
	cout << t;
}