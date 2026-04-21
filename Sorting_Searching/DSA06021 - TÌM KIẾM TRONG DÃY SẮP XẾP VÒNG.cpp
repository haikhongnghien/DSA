#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define INF 1e9
#define endl '\n'
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for(auto &it : v) cin >> it;
    int l = 0, r = n - 1;
    while(l <= r) {
        int mid = (l + r) / 2;
        if(v[mid] == x) {
            cout << mid + 1 << endl;
            return;
        }
        if(v[l] <= v[mid]) {
            if(v[l] <= x && x < v[mid]) r = mid - 1;
            else l = mid + 1;
        }
        else {
            if(v[mid] <= x && x < v[r]) l = mid + 1;
            else r = mid - 1;
        }
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
