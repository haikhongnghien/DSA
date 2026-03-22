#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
#define ll long long
using namespace std;

int solve(ll n, ll k) {
    if(n == 1) return 1;
    ll mid = 1ll << (n - 1);
    if(k == mid) return n;
    else if(k < mid) return solve(n - 1, k);
    else return solve(n - 1, k - mid);
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;
        cout << solve(n, k) << endl;
    }

    return 0;

}
