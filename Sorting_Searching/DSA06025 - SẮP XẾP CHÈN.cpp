#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n;
vector<int> v(105);
void solve() {
    int d = 0;
    cout << "Buoc " << d++ << ": " << v[0] << endl;
    for(int i = 1 ; i < n ; i++) {
        int key = v[i];
        int j = i - 1;
        while(j >= 0 && v[j] > key) {
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = key;
        cout << "Buoc " << d++ << ": ";
        for(int j = 0 ; j <= i ; j++) cout << v[j] << ' ';
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
