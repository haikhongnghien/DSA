#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
#define ll long long
using namespace std;

int n;

void solve() {
    cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    vector<int> dp(n + 1, 1);
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < i ; j++) {
            if(v[i] > v[j]) dp[i] = max(dp[i], dp[j] + 1);
        }
    }
    cout << *max_element(dp.begin(), dp.end()) << endl;
}

int main() {

    FASTER;
    solve();

    return 0;

}
