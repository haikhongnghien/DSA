#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1e9 + 7;
#define endl '\n'
using namespace std;

void solve() {
    int n; 
    cin >> n;
    queue<string> qe;
    qe.push("1");
    for(int i = 1 ; i <= n ; i++) {
        string t = qe.front(); qe.pop();
        cout << t << ' ';
        qe.push(t + '0');
        qe.push(t + '1');
    }
    cout << endl;
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
