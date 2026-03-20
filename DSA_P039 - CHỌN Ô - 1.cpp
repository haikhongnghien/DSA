#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
#define ll long long
using namespace std;

int n;

void solve() {
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    for(auto &i : v) {
        for(auto &j : i) {
            cin >> j;
        }
    }
    vector<ll> dp(1 << n, 0);
    for(int mask = 0 ; mask < (1 << n) ; mask++) {
        int hang = __builtin_popcount(mask);
        for(int j = 0 ; j < n ; j++) {
            if(!(mask & (1 << j))) {
                int newMask = mask | (1 << j);
                dp[newMask] = max(dp[newMask], dp[mask] + v[hang][j]);
            }
        }
    }
    cout << dp[(1 << n) - 1] << endl;
}

int main() {

    FASTER;
    int t; 
    cin >> t;
    while(t--) solve();

    return 0;

}
