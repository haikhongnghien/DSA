#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n;
    cin >> n;
    queue<int> qe;
    while(n--) {
        int q; 
        cin >> q;
        if(q == 1) {
            cout << qe.size() << '\n';
        }
        else if(q == 2) {
            cout << (qe.empty() ? "YES\n" : "NO\n");
        }
        else if(q == 3) {
            int x; cin >> x;
            qe.push(x);
        }
        else if(q == 4) {
            if(!qe.empty()) qe.pop();
        }
        else if(q == 5) {
            cout << (qe.empty() ? -1 : qe.front()) << '\n';
        }
        else if(q == 6) {
            cout << (qe.empty() ? -1 : qe.back()) << '\n';
        }
    }
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
