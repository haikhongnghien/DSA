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
    vector<int> v(n);
    for(auto &it : v) cin >> it;
    vector<int> inc(n, 1), dec(n, 1);
    for(int i = 1 ; i < n ; i++) {
        if(v[i] > v[i - 1]) inc[i] = inc[i - 1] + 1;
    }
    for(int i = n - 2 ; i >= 0 ; i--) {
        if(v[i] > v[i + 1]) dec[i] = dec[i + 1] + 1;
    }
    int ans = 1;
    for(int i = 0 ; i < n ; i++) {
        ans = max(ans, inc[i] + dec[i] - 1);
    }
    cout << ans << endl;
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
