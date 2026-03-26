#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
#define ll long long
using namespace std;

vector<vector<ll>> C(1005, vector<ll>(1005));

void solve() {
    for(int i = 0 ; i <= 1000 ; i++) {
        for(int j = 0 ; j <= i ; j++) {
            if(j == 0 || j == i) C[i][j] = 1;
            else C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % MOD;
        }
    }
}

int main() {

    FASTER;
    solve();
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        cout << C[n][k] << endl;
    }

    return 0;
}
