#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define endl '\n'
#define testcase() int t; cin >> t; while(t--)
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<vector<int>> v(n + 1);
    while(q--) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
    }
    for(int i = 1 ; i <= n ; i++) {
        cout << i << ": ";
        for(auto x : v[i]) {
            cout << x << ' ';
        }
        cout << endl;
    }
}

int main() {

    FASTER;
    testcase() solve(); 

    return 0;
}
