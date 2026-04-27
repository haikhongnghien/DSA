#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define INF 1e9
#define endl '\n'
using namespace std;

void solve() {
    int n;
    cin >> n;
    int mask = 1 << n;
    for(int i = 0 ; i < mask ; i++) {
        //gray[k] = binary[k] XOR binary[k+1]
        int gray = i ^ (i >> 1);
        for(int bit = n - 1 ; bit >= 0 ; bit--) {
            cout << ((gray >> bit) & 1);
        }
        cout << ' ';
    }
    cout << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
