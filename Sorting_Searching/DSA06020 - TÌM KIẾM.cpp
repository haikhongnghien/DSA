#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, x;
void TestCase() {
    vector<int> v(n);
    for(auto &i : v) cin >> i;
    for(auto i : v) {
        if(i == x) {
            cout << 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> x;
        TestCase();
    }

    return 0;

}
