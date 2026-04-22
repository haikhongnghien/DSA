#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define INF 1e9
#define endl '\n'
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for(int i = 1 ; i <= n ; i++) cin >> v[i];
    vector<int> dp(n + 1, 0);
    dp[1] = v[1];
    for(int i = 2 ; i <= n ; i++) {
        dp[i] = max(dp[i - 1], dp[i - 2] + v[i]);
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
