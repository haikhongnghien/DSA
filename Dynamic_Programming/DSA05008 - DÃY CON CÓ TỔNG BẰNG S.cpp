#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
#define ll long long
using namespace std;

int n, s;

void solve() {
    cin >> n >> s;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    vector<int> dp(s + 1, 0);
    dp[0] = 1;
    for(int i = 0 ; i < n ; i++) {
        for(int j = s ; j >= v[i] ; j--) {
            dp[j] = dp[j] || dp[j - v[i]];
        }
    }   
    if(dp[s]) cout << "YES\n";
    else cout << "NO\n";
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;

}
