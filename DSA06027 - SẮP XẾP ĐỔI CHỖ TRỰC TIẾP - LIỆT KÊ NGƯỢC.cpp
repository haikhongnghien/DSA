#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n;

void solve() {
    vector<int> v(n);
    int count[200][200];
    int d = 0;
    for(auto &x : v) cin >> x;
    for(int i = 0 ; i < n - 1 ; i++) {
        for(int j = i + 1 ; j < n ; j++) {
            if(v[i] > v[j]) swap(v[i],v[j]);
        }
        for(int j = 0 ; j < n ; j++) {
            count[d][j] = v[j];
        }
        d++;
    }
    for(int i = d - 1 ; i >= 0 ; i--) {
        cout << "Buoc " << i + 1 << ": "; 
        for(int j = 0 ; j < n ; j++) {
            cout << count[i][j] << ' ';
        }
        cout << endl;
    }
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        solve();
    }

    return 0;

}
