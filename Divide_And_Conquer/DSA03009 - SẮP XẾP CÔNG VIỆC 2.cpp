#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const long long MOD = 1e9 + 7;
#define endl '\n'
using namespace std;

int t, n;
vector<tuple<int,int,int>> ds;

void solve() {
    vector<bool> slot(1005, false);
    int cnt = 0;
    int sum = 0;
    for(auto [w, u, v] : ds) {
        for(int t = v; t >= 1; t--) {
            if(!slot[t]) {
                slot[t] = true;
                cnt++;
                sum += w;
                break;
            }
        }
    }
    cout << cnt << ' ' << sum << '\n';
}

int main() {
    FASTER;
    cin >> t;
    while(t--) {
        cin >> n;
        ds.clear();
        for(int i = 0 ; i < n ; i++) {
            int u, v, w;
            cin >> u >> v >> w;
            ds.push_back({w, u, v});
        }
        sort(ds.begin(), ds.end(), greater<tuple<int,int,int>>());
        solve();
    }
    return 0;
}
