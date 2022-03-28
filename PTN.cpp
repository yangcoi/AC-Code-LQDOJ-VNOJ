#include <iostream>
using namespace std;
#include <map>

int main(){
    long long N;
    freopen("PTN.INP", "r", stdin);
    freopen("ptn.out", "w", stdout);
    cin >> N;

    map<long long, long long> m;
    for(int i = 2; i <= N; i++){
        while(N % i == 0){
            m[i]++;
            N /= i;
        }
    }

    for(auto it : m){
        cout << it.first << " " << it.second << "\n";
    }
}
