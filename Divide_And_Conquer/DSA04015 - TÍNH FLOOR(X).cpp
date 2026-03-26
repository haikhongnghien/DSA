#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 123456789;
#define ll long long
using namespace std;

int t, n, x;

int BinarySearch(vector<int> v, int n, int x) {
    int idx = -1;
    int l = 0, r = n - 1;
    while(l <= r) {
        int mid = (r + l) / 2;
        if(v[mid] <= x) {
            idx = mid + 1;
            l = mid + 1;
        }
        if(v[mid] > x) r = mid - 1;
    }
    return idx;
}

void solve() {
    cin >> n >> x;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    cout << BinarySearch(v, n, x) << endl;
}

int main() {

    FASTER;
    cin >> t;
    while(t--) solve();

    return 0;

}
