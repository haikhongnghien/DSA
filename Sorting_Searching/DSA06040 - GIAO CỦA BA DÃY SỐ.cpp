#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define INF 1e9
#define endl '\n'
using namespace std;

void solve() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    vector<ll> A(n1), B(n2), C(n3);
    for(auto &x : A) cin >> x;
    for(auto &y : B) cin >> y;
    for(auto &z : C) cin >> z;
    vector<ll> res;
    int i = 0, j = 0, k = 0;
    while(i < n1 && j < n2 && k < n3) {
        if(A[i] == B[j] && B[j] == C[k]) {
            res.push_back(A[i]);
            i++; j++; k++;
        }
        else {
            ll minValue = min({A[i], B[j], C[k]});
            if(A[i] == minValue) i++;
            if(B[j] == minValue) j++;
            if(C[k] == minValue) k++;
        }
    }
    if(res.empty()) {
        cout << -1 << endl;
        return;
    }
    for(auto it : res) cout << it << ' ';
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
