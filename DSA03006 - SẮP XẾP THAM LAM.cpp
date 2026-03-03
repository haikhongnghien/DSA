#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
using namespace std;

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0 ; i < n ; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b.begin(), b.end());
        int ok = 1;
        for(int i = 0 ; i < n / 2 ; i++) {
            int j = n - 1 - i;
            int a1 = min(a[i], a[j]);
            int a2 = max(a[i], a[j]);
            int b1 = min(b[i], b[j]);
            int b2 = max(b[i], b[j]);
            if(a1 != b1 || a2 != b2) {
                ok = 0;
                break;
            }
        }
        cout << (ok ? "Yes" : "No") << endl;
    }

    return 0;

}
