#include <iostream>
using namespace std;

bool notf[200001];

int main() {
    notf[0] = true;
    notf[1] = true;
    for (int i = 2; i * i <= 200000; i++)
        if (!notf[i])
        {
            for (int j = i * i; j <= 200000; j += i)
            notf[j] = true;
        }
    ios::sync_with_stdio(false); cin.tie(0);
    int a, b;
    cin >> a >> b;
    for (; a <= b; a++)
    if (!notf[a])
    cout << a << '\n';
}
