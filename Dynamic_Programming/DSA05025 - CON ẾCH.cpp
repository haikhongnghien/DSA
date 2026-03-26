#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<ll> dp(55, 0);
    dp[1] = 1; dp[2] = 2; dp[3] = 4;
    for(int i = 4 ; i <= n ; i++) {
        dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
    }
    cout << dp[n] << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
