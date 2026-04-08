#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define endl '\n'
using namespace std;

int n;
vector<int> v;
vector<string> res;

int check(vector<int> s) {
    for(int i = 0 ; i < s.size() - 1 ; i++) {
        if(s[i] > s[i + 1]) return 0;
    }
    return 1;
}

void solve() {
    cin >> n;
    v.resize(n);
    for(auto &x : v) cin >> x;
    int mask = 1 << n;
    for(int i = 0 ; i < mask ; i++) {
        vector<int> cur;
        for(int j = 0 ; j < n ; j++) {
            if(i & (1 << j)) {
                cur.push_back(v[j]);
            }
        }
        if(cur.size() < 2) continue;
        if(check(cur)) {
            string t = "";
            for(auto x : cur) {
                t += to_string(x);
                t += " ";
            }
            t.pop_back();
            res.push_back(t);
        }
    }
    sort(res.begin(), res.end());
    for(auto x : res) cout << x << endl;
}

int main() {

    FASTER;
    solve();

    return 0;
}
