#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
#define ll long long
using namespace std;

int n, m, k;

void solve() {
    cin >> n >> m >> k;
    vector<int> a(n), b(m), c(k);
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;
    for(auto &x : c) cin >> x;
    int p1 = 0, p2 = 0, p3 = 0;
    bool ok = false;
    while(p1 < n && p2 < m && p3 < k) {
        if(a[p1] == b[p2] && b[p2] == c[p3]) {
            ok = true;
            cout << a[p1] << ' ';
            p1++; p2++; p3++;
        }
        else {
            int m = min({a[p1], b[p2], c[p3]});
            if(a[p1] == m) p1++;
            else if(b[p2] == m) p2++;
            else p3++;
        }
    }
    if(!ok) cout << "NO\n";
    else cout << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;

}
