#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
#define ll long long
using namespace std;

int n, v;

void solve() {
    cin >> n >> v;
    vector<int> A(n + 1), C(n + 1);
    for(int i = 1 ; i <= n ; i++) cin >> A[i];
    for(int i = 1 ; i <= n ; i++) cin >> C[i];
    vector<vector<int>> dp(n + 1, vector<int>(v + 1, 0));
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1 ; j <= v ;  j++) {
            //khong lay
            dp[i][j] = dp[i - 1][j];
            //lay
            if(j >= A[i]) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - A[i]] + C[i]);
            }
        }
    }
    cout << dp[n][v] << endl;
}   

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;

}
