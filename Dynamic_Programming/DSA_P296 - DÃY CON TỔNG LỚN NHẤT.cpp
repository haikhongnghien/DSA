#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
#define ll long long
using namespace std;

int n, q;
vector<ll> v(100005);
vector<ll> prefix_sum(100005, 0);

int main() {

    FASTER;
    cin >> n >> q;
    for(int i = 1 ; i <= n ; i++) cin >> v[i];
    for(int i = 1 ; i <= n ; i++) {
        if(v[i] <= 0) prefix_sum[i] = prefix_sum[i - 1];
        else prefix_sum[i] += v[i] + prefix_sum[i - 1];
    }
    while(q--) {
        int l, r;
        cin >> l >> r;
        cout << prefix_sum[r] - prefix_sum[l - 1] << endl;
    }

    return 0;
}
