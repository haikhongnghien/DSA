#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 123456789;
#define ll long long
using namespace std;

int n;

void solve() {
    cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    int max_sum = v[0];
    int t = v[0];
    for(int i = 1 ; i < n ; i++) {
        t = max(v[i], v[i] + t);
        max_sum = max(max_sum, t);
    }
    cout << max_sum << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;

}
