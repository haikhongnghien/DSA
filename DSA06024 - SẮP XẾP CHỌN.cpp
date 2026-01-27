#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n;
vector<int> v(105);
void solve() {
    int d = 1;
    for(int i = 0 ; i < n - 1 ; i++) {
        int min_idx = i;
        for(int j = i + 1 ; j < n ; j++) {
            if(v[min_idx] > v[j]) min_idx = j;
        }
        swap(v[i], v[min_idx]);
        cout << "Buoc " << d++ << ": ";
        for(int j = 0 ; j < n ; j++) {
            cout << v[j] << ' ';
        }
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
