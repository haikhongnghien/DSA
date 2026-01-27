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
        int min_idx = i;
        for(int j = i + 1 ; j < n ; j++) {
            if(v[min_idx] > v[j]) min_idx = j;
        }
        swap(v[i], v[min_idx]);
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
    solve();

    return 0;

}
