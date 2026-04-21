#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define INF 1e9
#define endl '\n'
using namespace std;

void solve() {
    int n;
    ll x;
    cin >> n >> x;
    vector<ll> v(n);
    for(auto &it : v) cin >> it;
    sort(v.begin(), v.end());
    ll count = 0;
    for(int i = 0 ; i < n - 2 ; i++) {
        int j = i + 1, r = n - 1;
        while(j < r) {
            if(v[i] + v[j] + v[r] < x) {
                count += r - j;
                j++;
            }
            else r--;
        }
    }
    cout << count << endl;
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
