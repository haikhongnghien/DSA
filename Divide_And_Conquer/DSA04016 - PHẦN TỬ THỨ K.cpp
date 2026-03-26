#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 123456789;
#define ll long long
using namespace std;

int n, m, k;

void solve() {
    cin >> n >> m >> k;
    vector<int> A(n), B(m);
    for(auto &x : A) cin >> x;
    for(auto &x : B) cin >> x;
    int s1 = 0, s2 = 0;
    int d = 1;
    while(s1 < n || s2 < m) {
        if(A[s1] < B[s2]) s1++;
        else s2++;
        d++;
        if(d == k) {
            cout << min(A[s1], B[s2]) << endl;
            break;
        }
    }
    while(s1 < n) {
        s1++;
        d++;
        if(d == k) {
            cout << A[s1] << endl;
            break;
        }
    }
    while(s2 < m) {
        s2++;
        d++;
        if(d == k) {
            cout << B[s2] << endl;
            break;
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
