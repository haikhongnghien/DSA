#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, a[5000005];

void solve() {
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    sort(a, a + n);
    for(int i = 0 ; i < n ; i++) cout << a[i] << " ";
    cout << "\n";
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        solve();
    }

    return 0;

}
