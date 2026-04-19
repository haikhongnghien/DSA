#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define endl '\n'
using namespace std;


void solve() {
    string m;
    cin >> m;
    int n = m.size();
    vector<ll> dp(50, 0);
    dp[0] = 1;
    dp[1] = (m[0] != '0') ? 1 : 0;
    for(int i = 2 ; i <= n ; i++) {
        int one = m[i - 1] - '0';
        int two = (m[i - 2] - '0') * 10 + m[i - 1] - '0';
        if(one != 0) dp[i] += dp[i - 1];
        if(two >= 10 && two <= 26) dp[i] += dp[i - 2];
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
