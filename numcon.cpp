
#include <algorithm>
#include<bits/stdc++.h>
#include <vector>
using namespace std;

vector<string> a;

int main() {
    freopen("numcon.inp", "r", stdin);
    freopen("numcon.out", "w", stdout);
    string s;
    while (cin >> s) a.push_back(s);
    for (int i = 0; i < a.size(); i++)
        for (int j = i + 1; j < a.size(); j++)
            if (a[i] + a[j] < a[j] + a[i]) swap(a[i],a[j]);
    for (int i = 0; i < a.size(); i++) cout << a[i];
    cout << endl;
}
