#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define endl '\n'
using namespace std;

int v, n;

void solve() {
    cin >> n >> v;
    int a[1005], c[1005], dp[1005] = {0};
    for(int i = 0 ; i < n ; i++) cin >> a[i];   
    for(int i = 0 ; i < n ; i++) cin >> c[i];
    for(int i = 0 ; i < n ; i++) {
        for(int j = v ; j >= a[i] ; j--) {
            dp[j] = max(dp[j], dp[j - a[i]] + c[i]);
        }
    }
    cout << dp[v] << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
