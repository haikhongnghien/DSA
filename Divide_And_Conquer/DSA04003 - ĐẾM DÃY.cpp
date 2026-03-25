#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 123456789;
#define ll long long
using namespace std;

ll n;

ll power(ll n, ll k) {
    if(k == 0) return 1;
    if(k == 1) return n;
    ll t = power(n, k/2);
    if(k & 1) return (t % MOD * t % MOD * n % MOD) % MOD;
    else return (t % MOD * t % MOD) % MOD;
}

void solve() {
    cin >> n;
    cout << power(2, n - 1) << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;

}
