#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#define ll long long

int n;

void TestCase() {
    cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    int m1 = INT_MAX, m2 = INT_MAX;
    for(auto x : v) {
        if(x < m1) {
            m2 = m1;
            m1 = x;
        }
        else if(x < m2 && x > m1) m2 = x;
    }
    if(m2 == INT_MAX) {
        cout << -1 << endl;
        return;
    }
    cout << m1 << ' ' << m2 << endl;
}

int main() {
    
    FASTER;
    int t;
    cin >> t;
    while(t--) {
        TestCase();
    }

    return 0;
}
