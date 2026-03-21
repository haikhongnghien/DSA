#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n;

void TestCase() {
    int d = 0;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    int l = -1, r = -1;
    for(int i = 0 ; i < n - 1 ; i++) {
        if(a[i] > a[i + 1]) {
            l = i;
            break;
        }
    }
    if(l == -1) {
        cout << 0 << ' ' << 0 << endl;
        return;
    }
    for(int i = n - 1 ; i > 0 ; i--) {
        if(a[i] < a[i - 1]) {
            r = i;
            break;
        }
    }
    int mn = INT_MAX, mx = INT_MIN;
    for(int i = l; i <= r; i++) {
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }
    while(l > 0 && a[l - 1] > mn) l--;
    while(r < n - 1 && a[r + 1] < mx) r++;
    cout << l + 1 << ' ' << r + 1 << endl;
}

int main() {
    
    FASTER;
    int t;
    cin >> t;
    while(t--) {
        TestCase();
    }

    return 0;
}
