#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1e9 + 7;
#define endl '\n'
using namespace std;

void solve() {
    ll n; 
    cin >> n;
    queue<ll> qe;
    qe.push(1);
    int d = 0;
    while(1) {
        ll t = qe.front(); qe.pop();
        if(t <= n) d++;
        else {
            cout << d << endl;
            break;
        }
        qe.push(t * 10);    
        qe.push(t * 10 + 1);
    }
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
