#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#define ll long long

int n;

void TestCase() {
    cin >> n;
    set<int> s;
    int mx = INT_MIN, mn = INT_MAX;
    for(int i = 0 ; i < n ; i++) {
        int a; cin >> a;
        s.insert(a);
        mx = max(mx, a);
        mn = min(mn, a);
    }
    cout << mx - mn - s.size() + 1<< endl;
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
