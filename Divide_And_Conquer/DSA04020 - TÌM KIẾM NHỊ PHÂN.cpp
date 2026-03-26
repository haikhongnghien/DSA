#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 123456789;
#define ll long long
using namespace std;

int t, n, k;

int BinarySearch(vector<int> v, int n, int k) {
    int l = 0, r = n - 1;
    while(l <= r) {
        int mid = (l + r) / 2;
        if(v[mid] == k) {
            return mid + 1;
            break;
        }
        else if(v[mid] > k) r = mid - 1;
        else l = mid + 1;
    }
    return -1;
}

void solve() {
    cin >> n >> k;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    int temp = BinarySearch(v, n, k);
    if(temp == -1) cout << "NO\n";
    else cout << temp << endl;
}

int main() {

    FASTER;
    cin >> t;
    while(t--) solve();

    return 0;

}
