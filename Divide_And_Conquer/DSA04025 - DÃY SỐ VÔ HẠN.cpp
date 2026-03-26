#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
#define ll long long
using namespace std;

ll n;

vector<vector<ll>> multiply(vector<vector<ll>> a, vector<vector<ll>> b) {
    vector<vector<ll>> c(2, vector<ll>(2));
    for(int i = 0 ; i < 2 ; i++) {
        for(int j = 0 ; j < 2 ; j++) {
            c[i][j] = 0;
            for(int k = 0 ; k < 2 ; k++) {
                c[i][j] += (a[i][k] % MOD * b[k][j] % MOD) % MOD;
                c[i][j] %= MOD;
            }
        }
    }
    return c;
}

void solve() {
    cin >> n;
    if(n == 1) {
        cout << 1 << endl;
        return;
    }
    vector<vector<ll>> a(2, vector<ll>(2));
    a[0][0] = 1; a[0][1] = 1;
    a[1][0] = 1; a[1][1] = 0;
    vector<vector<ll>> t(2, vector<ll>(2, 0));
    t[0][0] = 1; t[1][1] = 1;
    ll k = n - 1;
    while(k > 0) {
        if(k & 1) t = multiply(t, a);
        a = multiply(a,a);
        k >>= 1;
    }
    cout << t[0][0] << endl;
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
