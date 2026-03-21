#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#define ll long long

int n, k;

void TestCase() {
    cin >> n >> k;
    vector<int> X(n);
    for(auto &x : X) cin >> x;
    int d = 0;
    unordered_map<int, int> m;
    for(auto x : X) {
        d += m[k - x];
        m[x]++;
    }
    cout << d << endl;
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
