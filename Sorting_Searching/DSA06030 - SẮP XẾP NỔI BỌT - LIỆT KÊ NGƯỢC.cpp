#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n;

void solve() {
    cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    int d = 0;
    int count[105][105];
    for(int i = 0 ; i < n - 1 ; i++) {
        int ok = 0;
        for(int j = 0 ; j < n - 1 ; j++) {
            if(v[j] > v[j + 1]) {
                swap(v[j + 1], v[j]);
                ok = 1;
            }
        }
        if(!ok) continue;
        for(int j = 0 ; j < n ; j++) {
            count[d][j] = v[j];
        }
        d++;
    }
    for(int i = d - 1 ; i >= 0 ; i--) {
        cout << "Buoc " << i + 1<< ": ";
        for(int j = 0 ; j < n ; j++) {
            cout << count[i][j] << ' ';
        }
        cout << endl;
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
