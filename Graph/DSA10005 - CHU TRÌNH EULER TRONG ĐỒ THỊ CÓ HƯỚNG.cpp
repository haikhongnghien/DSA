#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define endl '\n'
#define testcase() int test; cin >> test; while(test--)
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> in(n + 1, 0), out(n + 1, 0);
    while(m--) {
        int a, b;
        cin >> a >> b;
        in[b]++;
        out[a]++;
    }
    for(int i = 1 ; i <= n ; i++) {
        if(in[i] != out[i]) {
            cout << 0 << endl;
            return;
        }
    }
    cout << 1 << endl;
}

int main() {

    FASTER;
    testcase() solve(); 

    return 0;
}
