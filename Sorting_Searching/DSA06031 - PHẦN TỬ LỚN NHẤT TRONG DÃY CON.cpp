#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, k;
vector<int> v;

void solve() {
    cin >> n >> k;
    v.resize(n);
    for(auto &x : v) cin >> x;
    deque<int> dq;
    for(int i = 0 ; i < n ; i++) {
        while(!dq.empty() && dq.front() <= i - k) dq.pop_front();
        while(!dq.empty() && v[dq.back()] <= v[i]) dq.pop_back();
        dq.push_back(i);
        if(i >= k - 1) {
            cout << v[dq.front()] << ' ';
        }
    }
    cout << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;

}
