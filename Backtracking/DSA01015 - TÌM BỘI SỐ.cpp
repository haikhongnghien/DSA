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
    queue<string> qe;
    qe.push("9");
    while(!qe.empty()) {
        string s = qe.front(); qe.pop();
        ll t = stoll(s);
        if(t % n == 0) {
            cout << t << endl;
            return;
        }
        qe.push(s + '0');
        qe.push(s + '9');
    }
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
