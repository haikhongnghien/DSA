#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 123456789;
#define ll long long
using namespace std;

int n;

void solve() {
    cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    auto it = upper_bound(v.begin(), v.end(), 0);
    cout << (it - v.begin()) << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;

}
