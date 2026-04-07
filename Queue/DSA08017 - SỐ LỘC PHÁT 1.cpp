#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1e9 + 7;
#define endl '\n'
using namespace std;

void solve() {
    int n; cin >> n;
    vector<ll> v;
    queue<ll> qe;
    ll t = (ll)pow(10, n);
    qe.push(6); qe.push(8);
    while(1) {
        ll temp = qe.front(); qe.pop();
        if(temp < t) {
            v.push_back(temp);
        }
        else break;
        qe.push(temp * 10 + 6);
        qe.push(temp * 10 + 8);
    }
    for(int i = v.size() - 1 ; i >= 0 ; i--) cout << v[i] << ' ';
    cout << endl;
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
