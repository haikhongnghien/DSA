#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
#define ll long long
using namespace std;

void solve() {
    string s;
    vector<int> v;
    while(cin >> s) {
        int t;
        if(s == "push") {
            cin >> t;
            v.push_back(t);
        }
        else if(s == "show") {
            if(v.empty()) {
                cout << "empty" << endl;
                continue;
            }
            for(auto x : v) {
                cout << x << ' '; 
            }
            cout << endl;
        }
        else {
            if(v.empty()) {
                cout << "empty" << endl;
                continue;
            }
            v.pop_back();
        }
    }
}

int main() {

    FASTER;
    solve();

    return 0;
}
