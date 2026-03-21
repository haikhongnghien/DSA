#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
using namespace std;

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> v(n);
        for(auto &x : v) cin >> x;
        sort(v.begin(), v.end());
        k = min(k, n - k);
        long long res = 0;
        for(int i = k ; i < n ; i++) {
            res += v[i];
        }
        for(int i = 0 ; i < k ; i++) {
            res -= v[i];
        }
        cout << res << endl;
    }
    return 0;

}
