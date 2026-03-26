#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 123456789;
#define ll long long
using namespace std;

int n;

void solve() {
    cin >> n;
    vector<int> A(n), B(n - 1);
    for(auto &x : A) cin >> x;
    for(auto &x : B) cin >> x;
    for(int i = 0 ; i < n ; i++) {
        if(A[i] != B[i]) {
            cout << i + 1 << endl;
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
