#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
#define ll long long
using namespace std;

int n;

void solve() {
    cin >> n;
    vector<pair<int,int>> v(n);
    for(auto &x : v) cin >> x.first >> x.second;
    sort(v.begin(), v.end(), [](pair<int,int> A, pair<int,int> B) {
        return A.second < B.second;
    });
    int d = 1;
    int lastEnd = v[0].second;
    for(int i = 1 ; i < n ; i++) {
        if(v[i].first >= lastEnd) {
            d++;
            lastEnd = v[i].second;
        }
    }
    cout << d << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;

}
