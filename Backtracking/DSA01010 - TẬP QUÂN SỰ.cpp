#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define INF 1e9
#define endl '\n'
using namespace std;

int n, k;
int x[20];

void solve() {
    cin >> n >> k;
    vector<int> v(k);
    memset(x, 0, sizeof(x));
    for(int i = 0 ; i < k ; i++) {
        cin >> v[i];
        x[i] = v[i];
    }
    int i = k - 1;
    while(i >= 0 && x[i] == n - k + i + 1) i--;
    if(i < 0) {
        cout << k << endl;
        return;
    }
    x[i]++;
    for(int j = i + 1 ; j < k ; j++) x[j] = x[j - 1] + 1;
    int d = 0;
    for(auto it : v) {
        bool ok = false;
        for(int i = 0 ; i < k ; i++) {
            if(it == x[i]) {
                ok = true;
                break;
            }
        }
        if(!ok) d++;
    }
    cout << d << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
