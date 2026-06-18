#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const long long MOD = 1e9 + 7;
#define endl '\n'
using namespace std;

ll t, n;
ll v[2000005];

int main() {
    FASTER;
    cin >> t;
    while(t--) {
        cin >> n;
        priority_queue<ll, vector<ll>, greater<ll>> Q;
        for(int i = 0 ; i < n ; i++) {
            cin >> v[i];
            Q.push(v[i]);
        }
        ll sum = 0;
        while(Q.size() >= 2) {
            ll a = Q.top(); Q.pop();
            ll b = Q.top(); Q.pop();
            sum += (a + b);
            sum %= MOD;
            Q.push((a + b) % MOD);
        }
        cout << sum % MOD << endl;
    }
    return 0;
}
