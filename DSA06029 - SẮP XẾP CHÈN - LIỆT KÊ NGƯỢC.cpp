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
    count[d++][0] = v[0];
    for(int i = 1 ; i < n ; i++) {
        int key = v[i];
        int j = i - 1;
        while(j >= 0 && v[j] > key) {
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = key;
        for(int j = 0 ; j <= i ; j++) {
            count[d][j] = v[j];
        }
        d++;
    }
    for(int i = d - 1 ; i >= 0 ; i--) {
        cout << "Buoc " << i << ": ";
        for(int j = 0 ; j <= i ; j++) {
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
