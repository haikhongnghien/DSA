#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const long long MOD = 1e9 + 7;
#define endl '\n'
using namespace std;

ll t, n;
ll x[100005], y[100005];

int main() {
    FASTER;
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 0 ; i < n ; i++) cin >> x[i];
        for(int i = 0 ; i < n ; i++) cin >> y[i];
        sort(x, x + n);
        sort(y, y + n, greater<int>());
        ll sum = 0;
        for(int i = 0 ; i < n ; i++) {
            sum += x[i] * y[i];
        }
        cout << sum << endl;
    }
    return 0;
}
