#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
using namespace std;

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        vector<long long> v(n);
        for(auto &x : v) cin >> x;
        sort(v.begin(), v.end());
        long long sum = 0;
        for(int i = 0 ; i < n ; i++) {
            sum = (sum + ((i % MOD) * (v[i] % MOD) %MOD) % MOD) % MOD;
        }
        cout << sum << endl;
    }

    return 0;

}
