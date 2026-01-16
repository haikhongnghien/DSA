#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, k, res = 0, ok = 0;
int x[20], a[20];

void check() {
    res++;
    for(int i = 1 ; i <= k ; i++) {
        if(a[i] != x[i]) return;
    }
    ok = 1;
}

void Try(int i) {
    if(ok) return;
    for(int j = x[i - 1] + 1; j <= n - k + i; j++) {
        x[i] = j;
        if(i == k) check();
        else Try(i + 1);
    }
}

void solve() {
    res = 0, ok = 0;
    cin >> n >> k;
    for(int i = 1 ; i <= k ; i++) cin >> a[i];
    Try(1);
    cout << res << endl;
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
