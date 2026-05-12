#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
using namespace std;

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0 ; i < n ; i++) {
            cin >> a[i];
        }
        bool ok = true;
        for(int i = 0 ; i < n - 1 ; i++) {
            if(a[i] >= a[i + 1]) {
                ok = false;
                break;
            }
        }
        cout << (ok ? 1 : 0) << endl;
    }

    return 0;
}
