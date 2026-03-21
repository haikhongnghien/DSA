#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
#define ll long long
using namespace std;

int n;

void solve() {
    cin >> n;
    vector<int> v(n);
    vector<int> pos(n + 1);
    for(int i = 0 ; i < n ; i++) {
        cin >> v[i];
        pos[v[i]] = i;
    }
    int d = 1;
    int res = 0;
    for(int i = 1 ; i < n ; i++) {
        if(pos[i] < pos[i + 1]) d++;
        else d = 1;
        res = max(res, d);
    }
    cout << n - res << endl;
}

int main() {

    FASTER;
    solve();

    return 0;

}
