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
    vector<int> v(n);
    for(auto &it : v) cin >> it;
    int prefixMin[n + 1], sufixMax[n + 1];
    prefixMin[0] = v[0];
    for(int i = 1 ; i < n ; i++) {
        prefixMin[i] = min(prefixMin[i - 1], v[i]);
    }
    sufixMax[n - 1] = v[n - 1];
    for(int i = n - 2 ; i >= 0 ; i--) {
        sufixMax[i] = max(sufixMax[i + 1], v[i]);
    }
    int i = 0, j = 0, ans = -1;
    while(i < n && j < n) {
        if(prefixMin[i] < sufixMax[j]) {
            ans = max(ans, j - i);
            j++;
        }
        else i++;
    }
    cout << ans << endl;
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
