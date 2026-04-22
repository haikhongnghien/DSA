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
    for(int i = 0 ; i < n - 1 ; i++) {
        if(v[i] > v[i + 1]) {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << 0 << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
