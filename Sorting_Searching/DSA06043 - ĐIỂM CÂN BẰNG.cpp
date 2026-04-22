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
    ll total = 0;
    for(auto &it : v) {
        cin >> it;
        total += it;
    }
    ll left = 0;
    for(int i = 0 ; i < n ; i++) {
        if(left == total - left - v[i]) {
            cout << i + 1 << endl;
            return;
        }
        left += v[i];
    }
    cout << -1 << endl;
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
