#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
#define ll long long
using namespace std;

ll n;

ll Power(ll n, ll k) {
    if(k == 0) return 1;
    ll t = Power(n, k/2);
    if(k & 1) return (t % MOD * t % MOD * n % MOD) % MOD;
    else return (t % MOD * t % MOD) % MOD;
}

void solve() {
    cin >> n;
    ll t = n;
    ll k = 0;
    while(t) {
        k = k * 10 + t % 10;
        t /= 10;
    }
    cout << Power(n,k) << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;

}
