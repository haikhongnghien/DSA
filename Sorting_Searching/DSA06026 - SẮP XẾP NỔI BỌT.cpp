#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n;
vector<int> v(105);
void solve() {
    int d = 1;
    for(int i = 0 ; i < n - 1 ; i++) {
        int ok = 0;
        for(int j = 0 ; j < n - 1 ; j++) {
            if(v[j] > v[j + 1]) {
                swap(v[j + 1], v[j]);
                ok = 1;
            }
        }
        if(!ok) continue;
        cout << "Buoc " << d++ << ": ";
        for(int j = 0 ; j < n ; j++) cout << v[j] << ' ';
        cout << endl;
    }
}

int main() {

    FASTER;
    cin >> n;
    for(auto &x : v) cin >> x;
    solve();

    return 0;

}
