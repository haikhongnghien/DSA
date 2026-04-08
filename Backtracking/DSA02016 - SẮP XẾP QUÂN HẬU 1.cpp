#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define endl '\n'
using namespace std;

int n, d;
int a[20], b[20], c[20];

void NQueen(int i) {
    for(int j = 1 ; j <= n ; j++) {
        if(!a[j] && !b[i + j - 1] && !c[i - j + n]) {
            a[j] = b[i + j - 1] = c[i - j + n] = 1;
            if(i == n) d++;
            else NQueen(i + 1);
            a[j] = b[i + j - 1] = c[i - j + n] = 0;
        }
    }
}

void solve() {
    cin >> n;
    d = 0;
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    memset(c, 0, sizeof(c));
    NQueen(1);
    cout << d << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
