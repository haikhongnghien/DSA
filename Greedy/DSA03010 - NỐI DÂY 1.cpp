#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
#define ll long long
using namespace std;

int n;

void solve() {
    cin >> n;
    vector<int> v(n);
    priority_queue<int, vector<int>, greater<int>> pq;
    for(auto &x : v) {
        cin >> x;
        pq.push(x);
    }
    ll sum = 0;
    while(pq.size() >= 2) {
        int a = pq.top(); pq.pop();
        int b = pq.top(); pq.pop();
        sum += (a + b);
        pq.push(a + b);
    }
    cout << sum << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;

}
