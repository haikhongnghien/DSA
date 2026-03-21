#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
#define ll long long
using namespace std;

int n;

void solve() {
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    sort(a.begin(), a.end());
    long long res = LLONG_MIN;
    res = max(res, 1LL * a[n-1] * a[n-2]);
    res = max(res, 1LL * a[n-1] * a[n-2] * a[n-3]);
    res = max(res, 1LL * a[0] * a[1] * a[n-1]);
    cout << res;
}

int main() {

    FASTER;
    solve();

    return 0;

}
