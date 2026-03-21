#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
#define ll long long
using namespace std;

int d;
string s;

void solve() {
    cin >> d >> s;
    priority_queue<pair<int,char>> pq;
    map<char, int> m;
    for(auto x : s) {
        m[x]++;
    }
    for(auto x : m) {
        pq.push({x.second, x.first});
    }
    int res = s.size();
    while(!pq.empty()) {
        vector<pair<int, char>> temp;
        d = min(d, res);
        for(int i = 0 ; i < d ; i++) {
            if(pq.empty()) {
                cout << -1 << endl;
                return;
            }
            auto t = pq.top(); pq.pop();
            t.first--;
            temp.push_back(t);
        }
        for(auto x : temp) {
            if(x.first) pq.push(x);
        }
        res -= d;
    }
    cout << 1 << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;

}
