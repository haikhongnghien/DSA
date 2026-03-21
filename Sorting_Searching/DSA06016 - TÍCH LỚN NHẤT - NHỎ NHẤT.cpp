#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#define ll long long

int n, m;

void TestCase() {
    cin >> n >> m;
    vector<int> A(n),B(m);
    int mn = INT_MAX, mx = INT_MIN;
    for(auto &a : A) {
        cin >> a;
        mx = max(mx, a);
    }
    for(auto &b : B) {
        cin >> b;
        mn = min(mn, b);
    }
    cout << (long long) mx * mn << endl;
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
