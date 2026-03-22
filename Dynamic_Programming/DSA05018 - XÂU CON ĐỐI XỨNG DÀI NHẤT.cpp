#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
#define ll long long
using namespace std;

void solve() {
    string s; cin >> s;
    int n = s.size();
    vector<vector<int>> dp(n + 1, vector<int>(n + 1));
    for(int i = 0 ; i < n ; i++) {
        dp[i][i] = 1;
    }
    int res = 1;
    for(int len = 2 ; len <= n ; len++) {
        for(int i = 0 ; i <= n - len ; i++) {
            int j = i + len - 1;
            if(len == 2) 
                dp[i][j] = (s[i] == s[j]);
            else
                dp[i][j] = dp[i + 1][j - 1] && (s[i] == s[j]);
            if(dp[i][j]) res = max(res, len);
        }
    }
    cout << res << endl;
}   

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;

}
