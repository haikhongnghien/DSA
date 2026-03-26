#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for(int i = 1 ; i <= n ; i++) cin >> v[i];
    vector<int> dp(n + 1, 1);
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1 ; j < i ; j++) {
            if(v[i] >= v[j]) dp[i] = max(dp[i], dp[j] + 1);
        }
    }
    cout << n - *max_element(dp.begin() + 1, dp.end()) << endl;
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
