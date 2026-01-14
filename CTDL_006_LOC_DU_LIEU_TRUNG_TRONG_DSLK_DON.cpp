#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, k;

int main() {

    FASTER;
    cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    unordered_set<int> s;
    for(int i = 0 ; i < n ; i++) {
        s.insert(a[i]);
    }
    vector<int> v;
    for(auto x : s) {
        v.push_back(x);
    }
    reverse(v.begin(), v.end());
    for(auto x : v) cout << x << ' ';

    return 0;

}
