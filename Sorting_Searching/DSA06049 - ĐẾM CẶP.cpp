#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define INF 1e9
#define endl '\n'
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(auto &it : v) cin >> it;
    sort(v.begin(), v.end());
    ll ans = 0, left = 0;
    for(int i = 1 ; i < n ; i++) {
        while(v[i] - v[left] >= k) left++;
        ans += i - left;
    }
    cout << ans << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
