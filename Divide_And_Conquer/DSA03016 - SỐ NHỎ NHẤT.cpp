#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const long long MOD = 1e9 + 7;
#define endl '\n'
using namespace std;

int t, s, d;
int x[1005];

int main() {
    FASTER;
    cin >> t;
    while(t--) {
        cin >> s >> d;
        if(9 * d < s) {
            cout << -1 << endl;
            continue;
        }
        x[0] = 1; s--;
        for(int i = d - 1 ; i > 0 ; i--) {
            x[i] = min(9, s);
            s -= x[i];
        }
        x[0] += s;
        for(int i = 0 ; i < d ; i++) cout << x[i];
        cout << endl;
    }
    return 0;
}
