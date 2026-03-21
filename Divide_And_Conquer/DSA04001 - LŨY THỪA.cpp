#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
#define ll long long
using namespace std;

int n, k;

ll Power(int n, int k) {
    if(k == 0) return 1;
    ll t = Power(n, k/2);
    if(k & 1) return (t % MOD * t % MOD * n % MOD) % MOD;
    else return (t % MOD * t % MOD) % MOD;
}

void solve() {
    cin >> n >> k;
    cout << Power(n,k) << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;

}
