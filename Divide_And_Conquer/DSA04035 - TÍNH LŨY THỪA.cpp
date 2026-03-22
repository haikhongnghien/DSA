#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
#define ll long long
using namespace std;

int power(int a, ll b) {
    if(b == 0) return 1;
    if(b == 1) return a;
    ll t = power(a, b / 2);
    if(b & 1) return (t % MOD * t % MOD * a % MOD) % MOD;
    else return (t % MOD * t % MOD) % MOD;
}

int main() {

    FASTER;
    while(1) {
        int a;
        ll b;
        cin >> a >> b;
        if(a == 0 && b == 0) break;
        cout << power(a,b) << endl;
    }

    return 0;

}
