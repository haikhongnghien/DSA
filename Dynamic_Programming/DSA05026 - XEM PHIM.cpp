#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define endl '\n'
using namespace std;

int c, n;
vector<int> w(105), dp(25005);

void solve() {
    cin >> c >> n;
    for(int i = 0 ; i < n ; i++) cin >> w[i];
    for(int i = 0 ; i < n ; i++) {
        for(int j = c ; j >= w[i] ; j--) {
            dp[j] = max(dp[j], dp[j - w[i]] + w[i]);
        }
    }
    cout << dp[c] << endl;
}

int main() {

    FASTER;
    solve();

    return 0;
}
