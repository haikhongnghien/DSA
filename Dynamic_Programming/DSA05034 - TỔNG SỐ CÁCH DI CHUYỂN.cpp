#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define endl '\n'
using namespace std;

int n, k;

void solve() {
    cin >> n >> k;
    vector<ll> dp(n + 1), prefix_sum(n + 2);
    dp[0] = 1;
    prefix_sum[1] = 1;
    for(int i = 1 ; i <= n ; i++) {
        int idx = max(0, i - k);
        dp[i] = (prefix_sum[i] - prefix_sum[idx] + MOD) % MOD;
        prefix_sum[i + 1] = (prefix_sum[i] + dp[i]) % MOD;
    }
    cout << dp[n] << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
