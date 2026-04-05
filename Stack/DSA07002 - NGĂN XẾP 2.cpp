#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
#define ll long long
using namespace std;

void solve() {
    int q; cin >> q;
    stack<int> st;
    while(q--) {
        int t;
        string s;
        cin >> s;
        if(s == "PUSH") {
            cin >> t;
            st.push(t);
        }
        else if(s == "POP") {
            if(!st.empty()) st.pop();
        }
        else {
            if(st.empty()) cout << "NONE\n";
            else cout << st.top() << endl;
        }
    }
}

int main() {

    FASTER;
    solve();

    return 0;
}
