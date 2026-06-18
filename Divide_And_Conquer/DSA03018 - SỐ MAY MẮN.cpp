#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    FASTER;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        bool ok = false;
        for(int y = n / 7; y >= 0; y--) {
            int rem = n - 7 * y;
            if(rem % 4 == 0) {
                int x = rem / 4;
                while(x--) cout << '4';
                while(y--) cout << '7';
                cout << '\n';
                ok = true;
                break;
            }
        }
        if(!ok) cout << -1 << '\n';
    }
    return 0;
}
